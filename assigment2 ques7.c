#include<stdio.h>
int main()
{

    int num,count=0,result;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
    result=num&1;
    count++;
    if(result==1)
    {
    printf("postion of 1 from lcb is =%d",count);
    break;
    }
    else
    num=num>>1;
   }
    return 0;
}
