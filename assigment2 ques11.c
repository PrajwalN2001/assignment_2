#include<stdio.h>
int main()
{
    int num,digit;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter a digit");
    scanf("%d",&digit);
    num=num*10+digit;
    printf("new number=%d",num);
    return 0;

}
