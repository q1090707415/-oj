#include <stdio.h>

int main(void)
{
    //����
    int id = 0;
    float c_core = 0.0;
    float math_score = 0.0;
    float eng_score = 0.0;
    scanf("%d;%f,%f,%f", &id, &c_core, &math_score, &eng_score);
    //���
    //С�����ڴ����п��ܲ��ܾ�ȷ����
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c_core, math_score, eng_score);
    return 0;
}