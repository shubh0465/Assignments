#include <stdio.h>
int main(){
	int a,b,c,p,q,r,x,y,z;
	printf("enter the value of a b c p q r or ai+bj+ck and pi+qj+rk\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&p,&q,&r);
    x=b*r-c*q; y=a*r-c*p; z=a*q-b*q;
    printf("cross product is %di-(%d)j+(%d)k",x,y,z);
}