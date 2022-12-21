#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int H,M;
    H=n/60;
    M=n%60;
    printf("%d Hour(s) %d Minute(s)",H,M);
}