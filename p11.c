// [C_MM08-易] 計算兩數和的平方值 //

#include <stdio.h>

int main()
{
    int i1, i2;
    int sum;

    scanf("%d%d", &i1, &i2);
    sum = i1 + i2;
    printf("%d\n", sum*sum);
    return 0;
}