
#include <stdio.h>
#include <math.h>

double main(int argc, const char * argv[])     /* program which introduces keyboard input */
{
float a, b, c, sum, sroot;

printf("Enter three numbers to add\n");
printf("Please enter a \n");
scanf("%f",&a);
printf("Please enter b \n");
scanf("%f",&b);
printf("Please enter c \n");
scanf("%f",&c);

sum = a + b + c;

printf("Sum of entered numbers = %f\n",sum);

sroot = sqrt(sum);

printf("The square root of the sum = %f\n", sroot);

return 0;

//printf("Type in a number a\n");
//scanf("%d", &a);
//printf("Type in a number b\n");
//scanf("%d", &b);
//printf("Type in a number c\n");
//scanf("%d", &c);
//sum = a + b + c;
//printf("The total is\n", sum);
//scanf("%d", &sum);
//scanf("%d%d%d",&a,&b,&c);
//printf("The sum of the numbers were \n", sum);
//sum = a + b + c;
//scanf("%d%d%d", &sum);
//printf("The sum of the numbers you typed in was %d\n", sum);
}

