#include<stdio.h>

int main()
{
int age;
int annualIncome;
printf("Enter your age!\n");
scanf("%d", &age);
printf("How much is your annualIncome in shillings?\n");
scanf("%d", &annualIncome);
if(age >= 21 , annualIncome>=21000){
printf("Congratulations you qualify for a loan.");
}
else{ printf("Unfortunately, you don't qualify for a loan.");}
    return 0;
}