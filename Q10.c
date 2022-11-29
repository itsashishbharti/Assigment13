#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    printf("\nEnter Power value=");
    scanf("%d",&b);
   printf("%d to the power %d =%d",a,b, power( a, b));
    return 0;
}
int power(int x,int y)
{
    int static c=1;
    if(y<=0)
        return x*c;
    else
        power(x,y-1);
        c=c*x;
        return c;
     
}