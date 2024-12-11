#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 0.0, i = 0.0, x = 1.0; 
    int sign = 1;

    for (;; x++) { 
        i = 4.0 / ((2 * x) - 1);
        pi = pi + (i * sign);
        sign = sign * -1;

        if (fabs(pi - 3.14159) <= 0.000001) {
            break;
        }
    }

    printf("pi = %.5f\n", pi);
    printf("最小x = %.0f\n", x); 
    return 0;
}
