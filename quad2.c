#include <stdio.h>
#include <math.h>
float discriminant(float a, float b, float c);
float main()
{
float a, b, c, d, root1, root2;

printf("Enter coefficients a, b and c: ");
scanf("%lf %lf %lf",&a, &b, &c);

d = discriminant(a, b, c);
printf("The discriminant is %f\n",d);
//condition for real and different roots
if (d > 0)
{
//sqrt() function returns square root
root1 = (-b+sqrt(d))/(2*a);
root2 = (-b-sqrt(d))/(2*a);
}
//condition for real and equal roots
else 
{
root1 = (-b+sqrt(d))/(2*a);
root2 = (-b-sqrt(d))/(2*a);
}
//if roots are not real 
printf("root1 = %f and root2 = %f\n",root1 , root2);
}
float discriminant(float a, float b, float c){
float d = b*b - 4*a*c;
return d;
}

