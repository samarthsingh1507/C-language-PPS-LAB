#include<stdio.h>
#include<math.h>
int main(){
    double n,res;
    printf("enter the number:");
    scanf("%lf",&n);
    res = log(n);
    printf("the natura; logarith of %lf is %lf\n",n,res);
    return (0);
}