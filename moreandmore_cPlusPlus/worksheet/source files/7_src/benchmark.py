import subprocess, os,  argparse
import ConfigParser
import io
from subprocess import Popen
import matplotlib.pyplot as plt
import sys

KEYS = ["SIZE","MM_TYPE","ELAPSED"]

NUM_EXP = 6
PROG_DIR = "./"
PROG_NAME = "prog"

def process_result(result):
    global KEYS
    elapsed = "NaN"
    config = ConfigParser.ConfigParser()
    config.readfp(io.BytesIO(result))
    for key in KEYS:
        value = config.get("RESULT",key)
        #print key + ':' + value
        if key is "ELAPSED":
            elapsed = value
    return elapsed

def run_prog(cmd):
    process = Popen(cmd, stdin = subprocess.PIPE ,stdout=subprocess.PIPE,\
                        stderr= subprocess.PIPE )
    stdout, stderr = process.communicate()
    if stderr:
        print "ERROR:" 
        print  stderr
        return False

    elapsed = 0
    if stdout:
        print stdout
        elapsed = float( process_result(stdout) )
        #print "COMPUTED ELAPSED TIME: ", elapsed
    return elapsed

def benchmark(size_list, mmtype='basic', blocksize='32'):
    global NUM_EXP
    prog_path = os.path.join(os.getcwd(),PROG_DIR)
    res_list = []
    for size in size_list:
        elapsed_sum = 0
        for ecounter in range(NUM_EXP):
            if mmtype is 'basic':
                cmd = [prog_path + PROG_NAME, str(size), "basic" ]
            elif mmtype is 'li':
                cmd = [prog_path + PROG_NAME, str(size), "li" ]
            elif mmtype is 'block':
                cmd = [prog_path + PROG_NAME, str(size), "block", str(blocksize) ]
            elif mmtype is 'blas':
                cmd = [prog_path + PROG_NAME, str(size), "blas" ]
            elapsed_sum += run_prog(cmd)
        res_list.append( elapsed_sum / NUM_EXP )
    return res_list

def run_performance_benchmark(size_list):
    basic_time_result =  benchmark(size_list, mmtype='basic')
    li_time_result = benchmark(size_list, mmtype='li')
    blocksize = 32
    bloc_time_result = benchmark(size_list, mmtype='block', blocksize=blocksize)
    blas_time_result = benchmark(size_list, mmtype='blas')
    p_basic, = plt.plot(size_list, basic_time_result,\
                            marker='o', linestyle='--', color='r', label='BASIC')
    p_li, = plt.plot(size_list, li_time_result,\
                         marker='^', linestyle='--', color='g', label='LOOP_INTERCHANGE')
    p_block = plt.plot(size_list, bloc_time_result,\
                           marker='+', linestyle='--', color='m', label='BLOCK')
    p_blas, = plt.plot(size_list, blas_time_result,\
                         marker='s', linestyle='--', color='b', label='BLAS')
    plt.title('Execution Time for different Matrix Sizes')
    plt.xlabel('matrix size')
    plt.ylabel('time/seconds')
    plt.legend()
    plt.savefig("perf.png")
    
def run_mm_block_benchmark(block_size_list, matrix_size ):
    time_result = []
    for bsize in block_size_list:
        time_result.append( benchmark(matrix_size, mmtype='block', blocksize=bsize)[0] )
    print time_result
    print block_size_list
    plt.plot(block_size_list, time_result, marker='+', linestyle='--')#, label=str(bsize))
    plt.title('Execution Time for Different Block Sizes for Matrix: ' + str(matrix_size[0]) )
    plt.xlabel('block size')
    plt.ylabel('time/seconds')
    plt.savefig("block.png")

        

if __name__ == '__main__':
    if sys.argv[1] == 'perf':
        pow_list = [32,128,512]
        size_list = pow_list#[ 2**x for x in pow_list]
        print size_list
        run_performance_benchmark(size_list)
    elif sys.argv[1] == 'block':
        block_size_list = [4, 8,16, 32, 64]
        matrix_size = sys.argv[2]
        run_mm_block_benchmark(block_size_list, [matrix_size])
    else:
        print 'undefined command arguments'

