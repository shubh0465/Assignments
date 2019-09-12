#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,s;
	printf("enter the value of a b c and d");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	s=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	printf("\ndistance between (a,b) and (c,d) %f",s);

}