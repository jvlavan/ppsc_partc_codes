#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number to check whether it is prime or not:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        flag=1;
    }
if(flag==1)
printf(" %d is not a prime\n",n);
else 
printf(" %d is a prime\n",n);
return 0;
}