#include <stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));

}
int main()
{
    int num,t;
    printf("Enter the number to find factorial:");
    scanf("%d",&num);
    t=fact(num);
    printf("\nThe factorial of %d is %d\n",num,t);
    return 0;
}