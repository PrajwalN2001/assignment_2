#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("swap value of a and b is %d and %d",a,b);
    return 0;
}
