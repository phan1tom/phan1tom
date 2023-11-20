#include <stdio.h>
#include <math.h>

typedef unsigned char bool;

bool is_input_valid(double x);

int main()
{
    double x;
    printf("Enter x {0.14352 <= x <= 1.02834}: ");
    scanf("%lf", &x);

    if (is_input_valid(x))
    {
        double y = sqrt(sin(2 * x)) + sqrt(sin(3 * x));
        double z = sqrt(sqrt( log(tan( y - (3.14 / 8) )) ));

        printf("y(x)  = %8lf\nz(y) = %8lf\n", y, z);
    }
    else 
    {
        printf("Введённый x вне области определения\n");
    }

    return 0;
}

bool is_input_valid(double x)
{
    int n = (int)(x / 3.14) / 2;
    double remainder = x - (3.14 * 2 * n);
    return 0.14352 < remainder && remainder < 1.02834;
}
