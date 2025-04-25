#include<stdio.h>
int main(){
    int a;
    printf("enter the value-");
    scanf("%d",&a);
    if(a<0){
        printf("value is negative so it will be multiplied with -1 now- %d",a*-1);
    }
    else{
        printf("the value is already absolute");
    }
}