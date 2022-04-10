#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,l;
    printf("Enter the string:");
    gets(s1);
    for(l=0;s1[l]!='\0';l++);
    j=l-1;
    for(i=0;i<l;i++)
    {
        s2[i]=s1[j];
        j--;
    }
    s2[i]='\0';
printf("\nThe reversed string is:");
puts(s2);
printf("\n");
return 0;
}