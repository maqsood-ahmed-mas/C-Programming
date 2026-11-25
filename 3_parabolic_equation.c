#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c;
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);
    printf("c= ");
    scanf("%lf", &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("not real roots");
    }
    else if (discriminant == 0)
    {
        printf("one real root: %f", -b / (2 * a));
    }
    else if (discriminant > 0)
    {
        printf("two real roots are: %f and %f\n",
               (-b + sqrt(discriminant)) / (2 * a),
               (-b - sqrt(discriminant)) / (2 * a));
    }

    return 0;
}
