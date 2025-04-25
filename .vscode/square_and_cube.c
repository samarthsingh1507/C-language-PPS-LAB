#include<stdio.h>
#include<math.h>
int main(){
    double a,c;
    printf("enter the value-");
    scanf("%lf",&a);
    printf("enter the power-");
    scanf("%lf",&c);
    double d=pow(a,c);
    printf("%.2lf",d);
    return 0;
    
    
}