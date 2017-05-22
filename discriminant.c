
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

ds = b*b-4.*a*c;

printf("The discriminate is %f\n",ds);

return 0;

}
float discriminant(float a, float b, float c){
float d = b*b - 4*a*c;
return d;
}
