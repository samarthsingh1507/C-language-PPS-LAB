#include<stdio.h>
#include<math.h>
int main(){
    double P,R,A,T,CI;
    printf("enter the principle amount-");
    scanf("%lf",P);
    printf("enter time-");
    scanf("%lf",&T);
    printf("enter rate-");
    scanf("%lf",&R);
    double a=1+R/100;
    double b=pow(a,T);
    A=P*b;
    CI=A-P;
    printf("the compound intrest is - %lf",CI);
    return (0);

}