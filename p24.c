// [C_MM21-易] 算階乘 //

#include <stdio.h>

int main()
{
    long int n;
    long int sum = 1;

    scanf("%ld", &n);
    for(long int i = 1; i <= n; i ++)
    {
        sum *= i;
    }
    printf("%ld\n", sum);
    return 0;
}