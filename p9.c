// [C_MM06-易] 英哩轉公里 //

#include <stdio.h>

int main()
{
    double mile;
    double km;

    scanf("%lf", &mile);
    km = mile * 1.6;
    printf("%.1lf\n", km);
    return 0;
}