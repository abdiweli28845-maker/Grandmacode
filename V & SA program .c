#include<stdio.h>

int main(){
const double pi = 3.14159;
double radius;
double height;
double volume;    double surfaceArea;
printf("Dear learner, enter cylindrical radius in cm\n");
scanf("%lf", &radius);
printf("Enter  height of the cylinder in cm\n");
scanf("%lf", &height);
volume = pi*radius*radius*height;
surfaceArea = 2*pi*radius*radius+2*pi*radius*height;
printf("volume of cylinder: %lfcm³\n", volume);
printf("surfaceArea of cylinder: %lfcm²\n", surfaceArea);
    return 0;
}