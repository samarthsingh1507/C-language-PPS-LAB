#include<stdio.h>
int main(){
    double r1,r2,i1,i2,rsum,isum;
    printf("enter the r1 & i1 for 1st complex number:-");
    scanf("%lf%lf",&r1,&i1);
    printf("enter the r2&i2 for 2nd complex number-");
    scanf("%lf%lf",&r2,&i2);
    rsum = r1+r2;
    isum = i1+i2;
    printf("\nThe sum of complex number is %.2lf+i%.2lf",rsum,__STDC_UTF_32__);
    return (0);
    }