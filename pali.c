#include <stdio.h>
int main()
{
    int n,temp,sum=0,copy;
    printf("Enter the number to check palindrome:");
    scanf("%d",&n);
    copy=n;
    for(n;n!=0;n/=10)
    {
        temp=n%10;
    
        sum=(sum*10)+temp;
    }
if(sum==copy)
printf("%d is a palidrome \n",copy);

else 
printf("%d is not a palindrome\n",copy);
}
