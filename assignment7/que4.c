#include <stdio.h>
int main(){
	float a,b,c,d,p,q;
	printf("enter the values of a b c d for (a,b) and (c,d)\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	p=(a+c)/2; q=(b+d)/2;
	printf("(%.2f,%.2f)",p,q);
}