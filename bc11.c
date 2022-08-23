#include <stdio.h>

int main(void)
{
    //输入
    int id = 0;
    float c_core = 0.0;
    float math_score = 0.0;
    float eng_score = 0.0;
    scanf("%d;%f,%f,%f", &id, &c_core, &math_score, &eng_score);
    //输出
    //小数在内存中有可能不能精确保存
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c_core, math_score, eng_score);
    return 0;
}