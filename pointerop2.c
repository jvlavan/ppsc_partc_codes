#include <stdio.h>

int main()
{
    int a[]={10,20,30,40},*p,*q,*r;
    p=a+2;
    q=&a[2];
    r=a;
    printf("The address of the pointer p is %u",p);
    
    printf("\nThe address of the pointer q is %u",q);
    printf("\nThe address of the pointer r is %u",r);
 if(p==q)
     printf("\nBoth pointer p and q are same");
    if(r<p)
    printf("\nThe pointer r is smaller than p\n");  

    return 0;

}