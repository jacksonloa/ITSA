// [C_AR02-易] 一維陣列反轉 II：將輸入的六個數反轉輸出 //

#include <stdio.h>

int main()
{
    int input;
    int array[7] = {0};

    for(int i = 5; i >= 0; i --)
    {
        scanf("%d", &input);
        array[i] = input;
    }
    for(int i = 0; i < 6 ; i ++)
    {
        if(i == 5)
        {
            printf("%d\n", array[i]);
            break;
        }
        printf("%d ", array[i]);
    }
    return 0;
}