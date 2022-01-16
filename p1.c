// [C_AR03-易] 計算陣列中所有元素的立方和：求輸入所有數的立方和 //

#include <stdio.h>

int main()
{
    int input;
    int sum = 0;

    for(int i = 0; i < 6; i ++)
    {
        scanf("%d", &input);
        sum += (input*input*input); 
    }
    printf("%d\n", sum);
    return 0;
}