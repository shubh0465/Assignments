#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,x,y;
	printf("Entre the values of a,b,c in ax^2+bx+c=0\n");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		x=(-1*b+sqrt(d))/(2*a);
		y=(-1*b-sqrt(d))/(2*a);
		printf("%.2f and %.2f are the real roots\n",x,y);
	}
	else
	{
		x=(-1*b)/(2*a);
		y=(sqrt(-d))/(2*a);
		printf("%.2f+i%.2f and %.2f-i%.2f are the imaginary roots.\n",x,y,x,y);
	}
}