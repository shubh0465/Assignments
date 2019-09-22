#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,p,q;
	printf("enter the values of a b c d for a+bj and c+di\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	p=a+c; q=b+d;
	printf("%.2f+%.2fi",p,q);
}