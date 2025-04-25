#include <stdio.h>
int main(){
    int age;
    printf("enter the age of the person-");
    scanf("%d",&age);
    //if age is greater than r euqal to 18 it will give 1 else it will give 0
    if(age>=18)
    printf("%d\n",1);
    else
    printf("%d\n",0);
    //condition operator used
    int op= age>=18 ? 1:0;
    printf("%d",op); 
}