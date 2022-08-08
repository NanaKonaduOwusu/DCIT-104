#include <iostream>

using namespace std;

int main()
{
    int i=0
    int num1,num2, I,j;
    int flag=0;
    int sum=0;
    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);
    for(i=num1+1;i<=num2;i++)
    {
        flag=0;
        for(j=2; j<i/2; j++)
    {
        if(i%j==0)
        {
            flag=1;break;
        }
    }
    if(flag==0)
        sum+=i;
    printf("Prime numbers:%d\n",i);
    printf("Average:%d\n",sum);

}
