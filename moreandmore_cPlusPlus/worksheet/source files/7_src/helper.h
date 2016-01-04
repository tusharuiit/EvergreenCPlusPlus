#ifndef __HELPER_H__
#define __HELPER_H__

#include <iostream>
#include <stdlib.h>
#include <time.h>

void print_usage();
clock_t start_time_measuring();
double stop_time_measuring( clock_t tstart);

/**
 * Return a random double variable inside a given interval
 *
 * @param min the beginning of the interval
 * @param max the end of the interval 
 * @return retuns a double random number in interval [ min, max ]
 */
double generate_random_double( double min , double max);

#endif
