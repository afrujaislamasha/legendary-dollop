#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c, x, x1, x2, realPart, imgPart;
    printf("Enter the coefficients a, b and c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    x = b * b - 4 * a * c;

    if ( a == 0)
        {
            printf("This is not a quadratic equation\n");
        }

    else
    {
        if (x > 0)
    {
        printf("Roots are real numbers.\n");
        x1 = (-b + sqrt(x)) / (2 * a);
        x2 = (-b - sqrt(x)) / (2 * a);
        printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
    }

        else if (x == 0)
    {
        printf("Both roots are equal.\n");
        x1 = x2 = -b / (2 * a);
        printf("x1 = x2 = %.2lf;", x1);
    }

        else
    {
        printf("Roots are complex number.\n");
        realPart = -b / (2 * a);
        imgPart = sqrt(-x) / (2 * a);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi", realPart, imgPart, realPart, imgPart);
    }
        }

    return 0;
}
