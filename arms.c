#include <stdio.h>
int main()
{
    int n,copy,temp,sum=0,a=5;
   
    printf("Enter the number to check armstrong or not:");
    scanf("%d",&n);
    copy=n;
    for(n;n!=0;n/=10)
    {
        temp=n%10;
        sum=(temp*temp*temp)+sum;
    }
    if(sum==copy)
    printf("%d is an Armstrong\n",copy);
    else
    printf("%d is not an Armstrong\n",copy);
    return 0;

}