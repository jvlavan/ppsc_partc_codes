#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cricketer
{
    char pname[100];
    char cname[100];
    char temp[100];
    int run[5];
    float avg;

}p[5];
 void init1(int n)
    {
        fflush(stdin);
        if(n!=0)
        {
        printf("\n");
        gets(p[n].pname);}
        printf("\nEnter the player name:");
        gets(p[n].pname);
        fflush(stdin);
    }
    void init2(int n)
    {
      
        fflush(stdin);
        printf("\nEnter the Country name:");
        gets(p[n].cname);
        fflush(stdin);
     }
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        p[i].avg=0.0;
        printf("Enter the player %d details:",i+1);
        init1(i);
        fflush(stdin);
        init2(i);
        for(j=0;j<5;j++)
        {
            printf("\nEnter the ODI match %d run:",j+1);
            scanf("%d",&p[i].run[j]);
            p[i].avg= (float)p[i].run[j]+p[i].avg;

        }
        p[i].avg=p[i].avg/5;
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("\nThe player %d details:",i+1);
        printf("\nThe player name:%s",p[i].pname);
        printf("\nThe Country name:%s",p[i].cname);
        for(j=0;j<5;j++)
        {
            printf("\nThe ODI match %d run:%d",j+1,p[i].run[j]);

        }
        printf("\nThe average:%0.4f\n",p[i].avg);
     }

    return 0;
}

