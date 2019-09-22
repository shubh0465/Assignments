#include <stdio.h>
int main(){
	float a,b,c,p,q,r,z;
	printf("enter the values of a b c p q r for ai+bj+ck and pi+qj+rk\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	z=a*p+b*q+c*r;
	printf("%.2f",z);
}