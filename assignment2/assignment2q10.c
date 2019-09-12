#include <stdio.h>
#include <math.h>
int main(){
	float h,k,r,s,l,p,d;
	printf("enter the valure of h k r and s for center of circle(h,k), radius r and line x=s ");
	scanf("%f %f %f %f",&h,&k,&r,&s);
    d=h-s; p=sqrt(r*r-d*d); l=2*p;
    printf("\nlength of chord:%f",l);


}