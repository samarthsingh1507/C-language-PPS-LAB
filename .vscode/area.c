#include <stdio.h>
int main(){
    int r;
    printf("enter radius : ");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("the area is %0.2f",area);
    return 0;
}