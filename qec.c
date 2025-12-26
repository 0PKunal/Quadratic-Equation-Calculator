#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double D, realPart, imagPart;

    printf("\nEnter values of a: ");
    scanf("%lf", &a);
    printf("\nEnter values of b: ");
    scanf("%lf", &b);
    printf("\nEnter values of c: ");
    scanf("%lf", &c);
    
    if (a == 0)
    {
        printf("\nThis is not a quadratic equation.\n");
        return 0;
    }

    D = b*b - 4*a*c;

    if (D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);

        printf("\nRoots are real and distinct\n");
        printf("\nx1 = %.2lf\n", x1);
        printf("\nx2 = %.2lf\n", x2);
    }
    else if (D == 0)
    {
        double x = -b / (2*a);

        printf("\nRoots are real and equal\n");
        printf("\nx1 = x2 = %.2lf\n", x);
    }
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);

        printf("\nRoots are complex\n");
        printf("\nx1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("\nx2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
