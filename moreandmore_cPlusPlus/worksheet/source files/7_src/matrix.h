#ifndef __MATRIX_H
#define __MATRIX_H

#include <iostream>

#ifdef __APPLE__
#include <Accelerate/Accelerate.h>
#else
#include <cblas.h>
#endif

void generate_random_matrix(double A[], int size, double min, double max);
void display_matrix(double m[], int size);

void mat_mult_basic(double A[], double B[], int size, double C[]);
void mat_mult_linter_1(double A[], double B[], int size, double C[]);
void mat_mult_block(double A[], double B[], int size, int bsize, double C[]);
void mat_mult_cblas(double A[], double B[], int size, double C[]);

#endif
