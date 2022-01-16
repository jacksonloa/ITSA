// [C_MM27-易] 計算兩整數間所有整數的總和 //

#include <stdio.h>

int main()
{
    int n1, n2;

    scanf("%d%d", &n1, &n2);
    printf("%d\n", (n1+n2)*(n2-n1+1)/2);
    return 0;
}