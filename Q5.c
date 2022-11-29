#include<stdio.h>
int sumdigit(int);
int main()
{
    int n;
    printf("Enter Your Given Number=");
    scanf("%d",&n);
    //sumdigit(n);
    printf("Sum Of Digit=%d",sumdigit(n));
    return 0;
}
int sumdigit(int a)
{
    int static dig=0;
    int store;
    if(a<1)
    return 0;
    else
    sumdigit(a/10);
    store=a%10;
    dig=dig+store;
    return dig;

}