#include <stdio.h>
int main(){
    int hin,eng,hist,math,sci;
    float perc;
    printf("enter the marks of hin- eng- hist- math- sci- perc- ");
    scanf("%d%d%d%d%d",&hin,&eng,&hist,&math,&sci);
    perc=(float)((hin+eng+hist+math+sci)/500.0)*100;
    perc>=60.0 ? printf("first divison"):perc<59.0 && perc >50.0 ? printf("second divison"):perc<49.0 && perc>40.0 ? printf("third division"):perc <40.0 ? printf("fail"):printf("invalid");

    return(0);
}