/*
 * File: complex_types.h
 *
 * Code generated for Simulink model 'ButtonLogic'.
 *
 * Model version                  : 1.480
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Feb 18 17:46:27 2025
 */

#ifndef COMPLEX_TYPES_H
#define COMPLEX_TYPES_H
#include <stdint.h>

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
    float re;
    float im;
} creal32_T;

typedef struct {
    double re;
    double im;
} creal_T;

typedef creal_T creal64_T;

#define CINT8_T

typedef struct {
    int8_t re;
    int8_t im;
} cint8_T;

#define CUINT8_T

typedef struct {
    uint8_t re;
    uint8_t im;
} cuint8_T;

#define CINT16_T

typedef struct {
    int16_t re;
    int16_t im;
} cint16_T;

#define CUINT16_T

typedef struct {
    uint16_t re;
    uint16_t im;
} cuint16_T;

#define CINT32_T

typedef struct {
    int32_t re;
    int32_t im;
} cint32_T;

#define CUINT32_T

typedef struct {
    uint32_t re;
    uint32_t im;
} cuint32_T;

#endif                                 /* COMPLEX_TYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
