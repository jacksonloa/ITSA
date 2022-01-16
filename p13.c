// [C_MM10-易] 攝氏溫度轉華式溫度 //

#include <stdio.h>

int main()
{
    float c, f;

    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("%.1f\n", f);
    return 0;
}