#include<stdio.h>
int count(int );
int main()
{
    int n;
    printf("\nEnter your number=");
    scanf("%d",&n);
   printf("Number of digit=%d", count(n));
    return 0;
}
int count(int a)
{
    int static c=0;
    if(a<=0)
        return c;
    else
        count(a/10);
        c=c+1;
        return c;
}