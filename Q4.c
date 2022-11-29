#include<stdio.h>
int sqsumn(int);
int main()
{
    int n;
    printf("\n Enter Ylur Number=");
    scanf("%d",&n);
    printf(" Square & Sum of %d  Natural Number=%d",n,sqsumn(n));
    return 0;
}
int sqsumn(int a)
{
    int static s=0;
    if(a==0)return 0;
    sqsumn(a-1);
    s=s+(a*a);
    return s;
}