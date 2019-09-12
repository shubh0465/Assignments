#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,e,f,g,h,r,s,R,A,B,C,T;
	printf("enter the value of a b c d e f g h for plane a*x+b*y+c*z+d=0 and sphere x*x+y*y+z*z+e*x+f*y+g*z+h=0");
	scanf("%f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h);
	A=-e/2; B=-f/2; C=-g/2; r=sqrt(A*A+B*B+C*C-h); s=(a*A+b*B+c*C+d)/sqrt(a*a+b*b+c*c); R=sqrt(r*r-s*s);
	T=3.14*R*R;
	printf("\n center:(%f %f %f) \nradius of sphere r:%f \nradius of circle of intersection R:%f \narea of circle T:%f",A,B,C,r,R,T);


}