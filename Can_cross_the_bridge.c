#include<stdio.h>
int bridge(int x,int y,int z)
{
    int b=(z-y)/x;
    return b;
}
int main()
{
    int x,y,z,x1;
    scanf("%d%d%d",&x,&y,&z);
    x1=bridge(x,y,z);
    printf("%d",x1);
}