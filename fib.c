#include <stdio.h>
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    {
        return(fib(n-2)+fib(n-1));
    }
}
int main()
{
    int i,num;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf(" %d ",fib(i));
    }
    printf("\n");
    return 0;
}