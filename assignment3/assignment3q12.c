#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,d,p,q,r;
printf("enter the value of a b c for a*x+b*y+c=0\n");
scanf("%f %f %f %f %f %f",&p,&q,&r,&a,&b,&c);
d=(a*p+b*q+c)/sqrt(a*a+b*b);
if(d>=r)
	printf("no intersection");
else{
	printf("%f",d*sqrt(r*r-d*d));
}


}