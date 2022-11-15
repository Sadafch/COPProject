#ifndef FOURIER_H
#define FOURIER_H

/* 
 * General Notes on fourier analysis
 * I'm assuming for this project, we
 * can just do a discrete version of
 * the fourier transform and not
 * worry about parallelizing the FFT
 * algorithm, that would take forever
 * Here is the pseudocode though to get the fourier transform at index n:
 *  float GetFourierAtF_n(float* baseFunction)
 *  {
 *    float sum = 0.0;
 *    for (int k = 0; k < N; k++) { // function f(k) over range N
 *      float f_kAtkEqualsN = GetBaseFunctionValueAtXEqualsk(k);
 *      sum += f_kAtkEqualsN * WaveFunctionAtk(k);
 *    }
 *  }
 *  float* GetFourierTransform(float* baseFunction, float* outputArray, int length) {
 *    for (int n = 0; n < length; n++) {
 *      otuputArray[n] = GetFourierAtF_n(baseFunction);
 *    }
 *  }
 */

#endif