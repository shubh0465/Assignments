#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,s,t;
	printf("enter the value of a b and c");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2; t=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\narea %f",t);
}