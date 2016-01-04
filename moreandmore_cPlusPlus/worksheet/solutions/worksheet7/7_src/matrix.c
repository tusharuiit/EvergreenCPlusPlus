#include "matrix.h"
#include "helper.h"

void display_matrix(double m[], int size) {
  int i, j;
  printf("[\n");
  for (i=0; i<size; ++i) {
    for (j=0; j<size; ++j) 
      printf("%5.1f", m[i*size+j]);
    putchar('\n');
  }
  printf("]\n");
}

void generate_random_matrix(double m[], int size, double min, double max) {
  int i, j;
  for (i=0; i < size; ++i) {
    for (j=0; j < size; ++j) 
      m[i*size+j] = generate_random_double(min, max);
  }
}

void mat_mult_basic(double A[], double B[], int size, double C[]) {
  int i,j,k;
  for (i = 0; i < size; ++i) {
    for (j = 0; j < size; ++j) {
      for (k = 0; k < size; ++k) {
        C[i*size + j] +=  A[i*size + k] * B[k*size + j];
      }
    }
  }
}

void mat_mult_linter_1(double A[], double B[], int size, double C[]) {
  int i, j, k;
  int r;
  for (i = 0; i < size; ++i) {
    for (k = 0; k < size; ++k) {
      r = A[i*size + k];
      for (j = 0; j < size; ++j) {
        C[i*size + j] +=  r * B[k*size + j];
      }
    }
  }
}

void mat_mult_block(double A[], double B[], int size, int bsize, double C[]) {
  int i, j, k;
  int bi, bj, bk;
  for (bi = 0; bi < size; bi += bsize)
    for (bj = 0; bj < size; bj += bsize)
      for (bk = 0; bk < size; bk += bsize)
        for (i = 0; i < bsize; ++i) 
          for (j = 0; j < bsize; ++j) 
            for (k = 0; k < bsize; ++k) 
              C[ (bi + i)*size + (bj +j) ] +=  
                  A[(bi + i)*size + (bk + k)] * B[(bk + k)*size + (bj+j)];
}

void mat_mult_cblas(double A[], double B[], int size, double C[]) {
  cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 
              size, size, size, 1.0, A, size, B, size, 0.0, C, size);
}

