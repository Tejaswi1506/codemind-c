#include<stdio.h>
#include<math.h>
int main()
{
    int s,surfacearea,volume;
    scanf("%d",&s);
    surfacearea=6.0*s*s;
    volume=pow(s,3);
    printf("Surface area = %d and Volume = %d",surfacearea,volume);
}