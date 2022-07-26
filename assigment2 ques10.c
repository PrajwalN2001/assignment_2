
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num=num/10;
    num=num*10;
    printf("new number: %d",num);
    return 0;
}
