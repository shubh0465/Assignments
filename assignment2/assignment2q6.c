#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,x,y,r;
	printf("enter the value of a b and c");
	scanf("%f %f %f",&a,&b,&c);
	x=-a/2; y=-b/2; r=sqrt(a*a/4+b*b/4-c);
	printf("\n center: (%f,%f) \n radius %f",x,y,r);
	
}