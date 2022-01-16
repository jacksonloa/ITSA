// [C_MM02-易] 計算三角形面積 //

#include <stdio.h>

int main()
{
    float d, h;
    float A;

    scanf("%f%f", &d, &h);
    A = (d * h) / 2;
    printf("%.1f\n", A);
    return 0;
}