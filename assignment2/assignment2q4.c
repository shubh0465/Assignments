#include <stdio.h>
int main(){
	float a,b,c,m;
	printf("enter the value of a b and c for line a*x^2+b*x+c=0");
	scanf("%f %f",&a,&b);
	m=-a/b;
	printf("\nvalue of slope m %f",m);
}