#include <stdio.h>
#include <math.h>
int main()
{
   int a, b, c, d;
   double r, r1, r2;
   printf("Enter a, b and c : ");
   scanf("%d%d%d", &a, &b, &c);
   d = b*b - 4*a*c;
   if(a==0 && b==0)
   printf("No solution.");
   else if(a==0)
   {
   		r=(double)(-c/b);
   		printf("The root is %.2f.", r);
   }
   else if(d<0)
   printf("No real roots.");
   else
   {
		r1=(double)(-b+sqrt(d))/(2*a);
		r2=(double)(-b-sqrt(d))/(2*a);
		printf("The roots are %.2f and %.2f.", r1, r2);
   }
}
