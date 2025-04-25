#include<stdio.h>
int main(){
    char alpha;
    printf("enter the aphabet-");
    scanf("%c",&alpha);
    alpha>='A' && alpha <='Z' || alpha<='a' && alpha<='z' ? printf("it's an aplhabet SHER"):printf("something else");
    return(0);
}