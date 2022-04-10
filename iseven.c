#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check even or not:");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is even\n",n);
    else
    printf("%d is not even\n",n);
    return 0;
}