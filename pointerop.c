#include <stdio.h>

int main()
{
    int a=100,b=50,*p,*q;
    p=&a;
    q=&b;
    printf("The address of the pointer p is %u",p);
    p=p+2;
    printf("\nThe address of the pointer p after adding 2 is %u",p);
    printf("\nThe address of the pointer q is %u",q);
    q=q-2;
    printf("\nThe address of the pointer q after subtracting 2 is %u\n",q);

    return 0;

}