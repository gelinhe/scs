#ifndef PRIV_H_GUARD
#define PRIV_H_GUARD

#include "glbopts.h"
#include "scs.h"
#include "cs.h"
#include "../common.h"
#include "linAlg.h"

#include "include/cublas_v2.h"

struct PRIVATE_DATA {
    /* CUDA */
    cublasHandle_t cublasHandle;
    /* ALL BELOW HOSTED ON THE GPU */
    scs_float * p; /* cg iterate, n  */
    scs_float * r; /* cg residual, n */
    scs_float * Gp; /* G * p, n */
    scs_float * bg; /* b, n */
    AMatrix * Ag;   /* A matrix on GPU */
    AMatrix * G; /* Gram matrix on GPU */
};

#endif