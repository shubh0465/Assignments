#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,z;
	printf("enter the values of a b c for ai+bj+ck \n");
	scanf("%f %f %f",&a,&b,&c);
	z=sqrt(a*a+b*b+c*c);
	printf("(%.2fi+%.2fj+%.2fk)/%.2f",a,b,c,z);
}