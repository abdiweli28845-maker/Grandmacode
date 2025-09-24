#include<stdio.h>
int main() {
char height;
int idNumber;
float balance;
printf("Hello! What's your height in centimetres\n ");
scanf("%3c", &height);
printf("What's your idNumber\n");
scanf("%3d", &idNumber); 
printf("How much is in your bank account?"); 
scanf("%f\n", &balance);
    return 0;
}