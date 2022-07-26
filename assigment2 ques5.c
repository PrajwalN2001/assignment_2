
#include<stdio.h>
int main()
{

    int num,i,sum=0;
    scanf("%d",&num);
    for(i=0;i<=num+2;i++)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("sum of digit=%d",sum);
    return 0;
}
