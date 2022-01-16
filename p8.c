// [C_MM05-易] 計算正方形面積 //

#include <stdio.h>

int main()
{
    double d;
    double A;

    scanf("%lf", &d);
    A = d * d;
    A += 0.05;
    printf("%.1lf\n", A);
    return 0;
}