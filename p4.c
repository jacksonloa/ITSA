// [C_MM01-易] 計算梯型面積 //

#include <stdio.h>

int main()
{
    float u, d, h;
    float A;

    scanf("%f%f%f", &u, &d, &h);
    A = (u + d) * h / 2;
    printf("Trapezoid area:%.1f\n", A);
    return 0;
}   