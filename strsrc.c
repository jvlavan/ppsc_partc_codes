#include <stdio.h>
#include <string.h>
#define lim 100
int main()
{
    char names[lim][lim];
    char temp[lim];
    int j,f=0,size;
    printf("Enter the string size:");
    scanf("%d",&size);
    printf("\nNow enter the strings one by one :)\n");
    for(j=0;j<=size;j++)
   {
       
       gets(names[j]);
   }
   printf("\nEnter the string to search:");
gets(temp);

for(j=0;j<=size;j++)
   {
       if(strcmp(temp,names[j])==0)
       {
           f=1;
           break;

       }
   }
if(f==1)
{
    printf("\nThe string is found at %d\n",j);

}
else 
printf("\nThe string does not exists 404 :( \n");
   return 0;
}