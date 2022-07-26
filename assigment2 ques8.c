#include<stdio.h>
int main()
{

    int num,result;
    printf("enter the number");
    scanf("%d",&num);
    result=num&1;
    if(result==1)
        printf("number is odd");
    else
        printf("number is even");
    return 0;
}
