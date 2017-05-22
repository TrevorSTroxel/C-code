
#include <stdio.h>
#include <math.h>
float discriminant(float a, float b, float c);
double main(int argc, const char * argv[])    /* program which introduces keyboard input */
{
float a, b, c, d, sum, sroot, ds, discriminant;

printf("Enter three numbers to add\n");
printf("Please enter a \n");
scanf("%f",&a);
printf("Please enter b \n");
scanf("%f",&b);
printf("Please enter c \n");
scanf("%f",&c);

sum = a + b + c;

printf("Sum of entered numbers = %f\n",sum);

}
