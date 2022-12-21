#include<stdio.h>
#define PI 3.14f
int main()
{
    float r,area,per;
    scanf("%f",&r);
    area=PI*r*r;
    per=2*PI*r;
    printf("%.2f
",area);
    printf("%.2f",per);
    
}