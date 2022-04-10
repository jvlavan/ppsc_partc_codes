#include <stdio.h>
int main()
{
    int i;
    char ch[100];
   // system(clear);
    printf("Enter the string:");
    gets(ch);
    for(i=0;ch[i]!='\0';i++);
    printf("\nThe size of the string is %d \n",i);
    return 0;
}