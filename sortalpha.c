#include <stdio.h>
#include <string.h>
#define lim 100
int main()
{
    char names[lim][lim];
    char temp[lim];
    int i,j,k=0,size;
    printf("Enter the string size:");
    scanf("%d",&size);
    printf("\nNow enter the strings one by one :)\n");

    for(j=0;j<=size;j++)
   {
       gets(names[j]);
   }
   
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        
        if(strcmp(names[j],names[j+1])>0)
        {
            strcpy(temp,names[j]);
            strcpy(names[j],names[j+1]);
            strcpy(names[j+1],temp);

        }
    }
}
   for(j=0;j<=size;j++)
   {
       puts(names[j]);
       printf("\n");
   }
   return 0;
}