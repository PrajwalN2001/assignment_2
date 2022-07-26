#include<stdio.h>
int main()
{

    int num,result;
    printf("enter a three digit number");
    scanf("%d",&num);
   result=num%10;
   num=num/10;
   result=100*result+num;
        printf("new number is %d",result);
    return 0;
}
