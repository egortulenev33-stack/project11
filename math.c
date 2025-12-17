#include "math.h"
#include <math.h>

double compute_e(double eps) {
    double sum = 1.0;
    double term = 1.0;
    int k = 1;

    while (term > eps) {
        term /= k;
        sum += term;
        k++;
    }

    return sum;
}

int test_compute_e(void) {
    double eps = 1e-6;
    double expected = exp(1.0);
    double result = compute_e(eps);

    if (fabs(result - expected) < eps) {
        return 0;
    } else {
        return -1;
    }
}
