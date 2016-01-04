#include "helper.h"

void print_usage() {
  std::cout << "USAGE: ./prog <size> <type>" << std::endl;
  std::cout << std::endl;
  std::cout << "<size>: the size of the matrix" << std::endl;
  std::cout << "<type>: type of the matrix multiplication." << std::endl;
  std::cout << "\tAcceptabale values for type are \"basic\" and \"blockwise\"" << std::endl;
  
}

clock_t start_time_measuring() {
  return clock();
}

double stop_time_measuring( clock_t tstart) {
  clock_t tend = clock();
  return (double)(tend - tstart)/CLOCKS_PER_SEC;
}

double generate_random_double( double min , double max) 
{
  double range = max - min;
  double scale =  (double) random() / RAND_MAX ;
  return range * scale + min;
}
