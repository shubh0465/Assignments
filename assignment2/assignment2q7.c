#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,p,q,r,x,y;
	printf("enter the value of a b c p q and r for eqns a*x+b*y+c=0 p*x+q*y+r=0");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	y=(a*r-c*p)/(b*p-q*a); x=(b*r-c*q)/(a*q-b*p);
	printf("intersection point:(%f,%f)",x,y);

}