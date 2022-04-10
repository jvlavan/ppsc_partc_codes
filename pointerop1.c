#include <stdio.h>

int main()
{
    int a[]={10,20,30,40},*p,*q;
    p=a+2;
    q=a;
    printf("The address of the pointer p is %u",p);
    
    printf("\nThe address of the pointer q is %u",q);
    printf("\nSubtraction of pointers is %u",p-q);
    printf("\nSubtraction of pointer values is %d\n",*p-*q);
      

    return 0;

}