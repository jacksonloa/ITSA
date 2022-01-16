// [C_MM17-易] 求最大公因數 //

#include <stdio.h>

int main()
{
    int i1, i2, tmp = 1;

    scanf("%d%d", &i1, &i2);
    while(tmp != 0)
    {
        tmp = i1 % i2;
        i1 = i2;
        i2 = tmp;
    }
    printf("%d\n", i1);
    return 0;
}