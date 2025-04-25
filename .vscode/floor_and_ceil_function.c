#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    printf("enter the value-");
    scanf("%lf",&a);
    b=floor(a);
    c=ceil(a);
    printf("%0.2lf %0.2lf",b,c);
    return 0;
    

}