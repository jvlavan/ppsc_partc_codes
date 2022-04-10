#include <stdio.h>
struct payroll
{
    int bpay;
    float hra,da,pf,lic,ded,gsa,netsa;
}s1;
int main()
{
    printf("Enter the basic pay:");
    scanf("%d",&s1.bpay);
    s1.hra=0.18*s1.bpay;
    s1.da=0.15*s1.bpay;
    s1.pf=0.1*s1.bpay;
    s1.lic=0.07*s1.bpay;
    s1.ded=s1.pf+s1.lic;
    s1.gsa=s1.bpay+s1.hra+s1.da;
    s1.netsa=s1.gsa-s1.ded;
    printf("\nThe HRA is %0.3f",s1.hra);
    printf("\nThe DA is %0.3f",s1.da);
    printf("\nThe PF is %0.3f",s1.pf);
    printf("\nThe LIC is %0.3f",s1.lic);
    printf("\nThe Deduction is %0.3f",s1.ded);
    printf("\nThe Gross salary is %0.3f",s1.gsa);
    printf("\nThe net salary  is %0.3f\n",s1.netsa);
    return 0;
}