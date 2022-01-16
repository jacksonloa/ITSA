// [C_MM09-易] 計算 i 次方的值 //

#include <stdio.h>

int main()
{
    int i;
    int output = 1;

    scanf("%d", &i);
    if(i > 31) 
    {
        printf("Value of more than 31\n");
        return 0;
    }
    for(int j = 0; j < i; j ++)
    {
        output *= 2;
    }
    printf("%d\n", output);
    return 0;
}