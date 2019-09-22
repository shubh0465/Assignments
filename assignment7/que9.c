#include <stdio.h>
int main(){
	int a,b,c,d,z;
	printf("enter the value of a b c d for a+bi and c+di\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
    z=a*c+b*d;
    printf("multiplication of complex numbers %d\n",z);
    printf("division of a+bi by c+di (%d+(%d)i)/%d",a*c,b*d,z);
}