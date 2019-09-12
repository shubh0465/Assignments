#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,A,B;
	printf("enter the value of a b c");
	scanf("%f %f %f",&a,&b,&c);
	A=acos((a*a-b*b-c*c)/(-2*b*c));
	printf("\n angle %f",A);
	B=(180*A)/3.14;
	printf("\n angle in degree %f",B);

}