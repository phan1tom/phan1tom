#include <stdio.h>

int main()
{
    float a, b, x;

    printf("Введите a: ");
    scanf("%f", &a);
    printf("Введите b: ");
    scanf("%f", &b);
    printf("Введите x: ");
    scanf("%f", &x);

    float sum = a + b;
    float result;
    
    if (x == 0 && sum <= x)
    {
        printf("x is 0\n");
        return 0;
    }
    if (sum == 0 && sum > x)
    {
        printf("sum is 0\n");
        return 0;
    }

    if (sum < x)
        result = sum / x;
    else if (sum > x)
        result = x / sum;
    else
        result = b / x;

    printf("Результат: %.3f\n", result);
    return 0;
}
