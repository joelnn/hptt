#ifndef TTC_C_H
#define TTC_C_H

typedef struct node{
   int start;
   int end;
   int inc;
   int lda;
   int ldb;
   node *next = nullptr;
} node_t;


node_t* createPlan(const int *lda, const int *ldb, const int *size, const int* perm, const int dim);

/**
 * B(i2,i1,i0) <- alpha * A(i0,i1,i2) + beta * B(i2,i1,i0);
 */
void ttc_sTranspose( const float* __restrict__ A, float* __restrict__ B, const float alpha, const float beta, const node_t*plan);

void trashCache(double *A, double *B, int n);

#endif
