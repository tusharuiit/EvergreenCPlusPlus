#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "helper.h"
#include "matrix.h"

int main(int argc, char *argv[])
{
  if ( argc < 3 ) {
    print_usage();
    exit(EXIT_FAILURE);
  }


  /* parsing the command line arguments */
  std::string MMTYPE_BASIC = "basic";
  std::string MMTYPE_LI = "li";
  std::string MMTYPE_BLOCK = "block";
  std::string MMTYPE_BLAS = "blas";

  std::string type = argv[2];

  if ( (type != MMTYPE_BASIC) && (type != MMTYPE_LI) 
       && (type != MMTYPE_BLOCK) && (type != MMTYPE_BLAS)) {
    print_usage();
    exit(EXIT_FAILURE);
  }

  int size = atoi(argv[1]); 
  std::cout << "[RESULT]" << std::endl;
  std::cout << "SIZE=" << size << std::endl;
  std::cout << "MM_TYPE=" << type << std::endl;

  /* by blockwise matrix multiplicaiton the argv number 3 is the block size */
  int bsize;
  if (type == MMTYPE_BLOCK) {
    bsize = atoi(argv[3]);
    std::cout << "BLOCK_SIZE=" << bsize << std::endl;
  }

  /* allocating memory for matrix arrays */
  double* A;
  double* B;
  double* C;

  A = (double *) malloc(size*size*sizeof(double));
  B = (double *) malloc(size*size*sizeof(double));
  C = (double *) calloc(size*size,sizeof(double));

  if ( A == NULL || B == NULL || C == NULL) {
    std::cout << "malloc failed!" << std::endl;
    exit(EXIT_FAILURE);
  }

  /* initialize the matrices with random variables */
  srand ( time(NULL) );
  generate_random_matrix(A, size, 1.0, 1.0);
  generate_random_matrix(B, size, 1.0, 1.0);
  /* display_matrix(A, size); */
  /* display_matrix(B, size); */
  /* display_matrix(C, size); */

  clock_t cstart;
  double elapsed;
  if (type == MMTYPE_BASIC) {
    cstart = start_time_measuring();
    mat_mult_basic(A, B, size, C);
    elapsed = stop_time_measuring( cstart );

  } else if (type == MMTYPE_LI) {
    cstart = start_time_measuring();
    mat_mult_linter_1(A, B, size, C);
    elapsed = stop_time_measuring( cstart );

  } else if (type == MMTYPE_BLOCK) {
    cstart = start_time_measuring();
    mat_mult_block(A, B, size, bsize, C);
    elapsed = stop_time_measuring( cstart );

  } else if (type == MMTYPE_BLAS) {
    cstart = start_time_measuring();
    mat_mult_cblas(A, B, size, C);
    elapsed = stop_time_measuring( cstart );
  }

  /* display_matrix(C, size); */
  std::cout << "ELAPSED=" << elapsed << std::endl;

  free(A);
  free(B);
  free(C);
  return 0;
}
