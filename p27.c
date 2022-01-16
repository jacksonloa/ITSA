// [C_MM35-易] 平、閏年判定 //

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);
    if(year%4 == 0)
    {
        if(year%100 == 0 && year%400 != 0)
        {
            printf("Common Year\n");
        }
        else if(year%100 == 0 && year%400 == 0)
        {
            printf("Bissextile Year\n");
        }
    }
    else printf("Common Year\n");
    return 0;
}