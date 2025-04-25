#include<stdio.h>
int main(){
int num = 42;
printf("%+d\n", num);  // Output: +42 YE BASICALLY JO NEGATIVE AY POSTIVE SIGN MAI VO DE DETA HAI 

printf("%-5d\n", num); // Output: 42   YE RIGHT LEFT SPACES ADJUST KREGA
                       //AGAR -5 KI JAGAH SIRF 5 LIKH U TH RIGHT SIDE 5 SPACES LAVE KRKE AEGA OUTPUT

printf("%05d\n", num); // Output: 00042 YE BAS 0 LGA DETA HAI INSTEAD OF- 
                       //-THE SPACE BEING EMPY KNOW AS "PADDING"
}