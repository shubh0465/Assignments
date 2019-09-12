#include <stdio.h>
int main(){
	int a=0,b,c,d,e;
	printf("enter the value of a:");
	scanf("%d",&a);
	b=a%100;
	printf("\n value of b %d",b);
	c=b/10; d=b%10;
	printf("\n value of c and d %d %d",c,d);
	e=c+d;
	printf("\n sum of last two digits %d",e);
	return 0;
}
