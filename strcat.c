#include <stdio.h>
#include <string.h>
int main()
{
    int i,l,j;
    char s1[100],s2[100],des[200];
    printf("\nEnter the string 1:");
    gets(s1);
    printf("\nEnter the string 2:");
    gets(s2);
    for(l=0;s1[l]!='\0';l++);
    for(i=0;s1[i]!='\0';i++)
    {
        des[i]=s1[i];
    }
for(j=0;s2[j]!='\0';j++)
    {
        des[i]=s2[j];
        i++;
    }
des[i]='\0';
printf("\nThe concatenated string is:");
puts(des);
printf("\n");
return 0;
}