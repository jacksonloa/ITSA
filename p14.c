// [C_MM11-易] 購票計算 //

#include <stdio.h>

int main()
{
    int n;
    int ten = 0, five = 0, one = 0;

    scanf("%d", &n);
    ten = n / 10;
    five = (n - (ten*10)) / 5;
    one = n - (ten*10) - (five*5);
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten, five, one);
    return 0;
}