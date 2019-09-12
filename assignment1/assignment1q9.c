#include <stdio.h>
int main(){
	int a=0,b,c,d;
	printf("enter the value of a:");
	scanf("%d",&a);
	b=a/100; c=a%10;
	printf("\n value of b and c %d %d",b,c);
	d=b*10+c;
	printf("\n value of d %d",d);
	return 0;
}
