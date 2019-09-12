#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,e,f,x,y,z,s,t;
	printf("enter the value of a b c d e and f");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	x=sqrt((c-a)*(c-a)+(d-b)*(d-b)); y=sqrt((e-c)*(e-c)+(f-d)*(f-d)); z=sqrt((e-a)*(e-a)+(f-b)*(f-b)); s=(x+y+z)/2; t=sqrt(s*(s-x)*(s-y)*(s-z));

	printf("\n area of triangle %f",t);


}