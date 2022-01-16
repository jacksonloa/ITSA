// (其他I) [C_OT01-易] 計算BMI值 //

#include <stdio.h>

int main()
{
    float h, w, BMI;

    scanf("%f%f", &h, &w);
    h /= 100;
    BMI = w / (h*h);

    if(BMI < 18.5) printf("%.2f\nUnderweight\n", BMI);
    else if(BMI >= 18.5 && BMI < 24) printf("%.2f\nNormal\n", BMI);
    else if(BMI >= 24 && BMI < 27) printf("%.2f\nOverweight", BMI);
    else if(BMI >= 27 && BMI < 30) printf("%.2f\nObese Class I\n", BMI);
    else if(BMI >= 30 && BMI < 35) printf("%.2f\nObese Class II\n", BMI);
    else if(BMI >= 35) printf("%.2f\nObese Class III\n", BMI);
    return 0;
}