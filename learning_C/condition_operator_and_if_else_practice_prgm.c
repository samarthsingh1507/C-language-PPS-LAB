#include<stdio.h>
int main(){
    char name;
    printf("enter the character(capital)-");
    scanf("%c",&name);
    //using if else
    if(name=='C' || name=='A')
    printf("%d\n",1);
    else
    printf("%d\n",0);

    //using condtion opertaor or ternary operator
    int op= name=='A' || name=='C' ? 1:0;
    printf("%d",op);

}