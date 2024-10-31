#include <stdio.h>
#include <complex.h>

int main() {
    double i_real, i_imag, j_real, j_imag;
    double complex i, j, sum=0;
    int n;

    printf("Enter the values of i, j, and n: ");
    scanf("%lf %lf %lf %lf %d", &i_real, &i_imag, &j_real, &j_imag, &n);

    i = i_real + i_imag * I;
    j = j_real + j_imag * I;

    for (int k=0; k<=n; k++) {
        sum += (k*i + (n-k)*j);
    }

    printf("Summation of the given series = %lf%+lf*i\n", creal(sum), cimag(sum));

    return 0;
}
