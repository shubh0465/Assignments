#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,e,s;
	printf("enter the value of a b point(a,b)");
	scanf("%f %f",&a,&b);
	printf("\n enter the value c d e of equation c*x+d*y+e=0 ");
	scanf("%f %f %f",&c,&d,&e);
	s=(a*c+b*d+e)/sqrt(c*c+d*d);
	printf("\n value of distance between point and line %f",s);

}