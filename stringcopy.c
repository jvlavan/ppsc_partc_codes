#include <stdio.h>
#include <string.h>
#define limit 100
int main()
{
    int i;
    char source[limit],copy[limit];
    printf("Enter the string:");
    gets(source);
    for(i=0;source[i]!='\0';i++)
    {
        copy[i]=source[i];
    }
copy[i]='\0';
printf("The copied string is:");
puts(copy);
printf("\n");
}