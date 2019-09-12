#include <stdio.h>
int main(){
	int a=0,b,c,d,e,f;
	printf("enter the value of a:");
	scanf("%d",&a);
	b=a/100; c=a%100; d=c/10; e=c%10;
	printf("\n value of b c d and e %d %d %d %d",b,c,d,e);
	f=b*100+e*10+d;
	printf("\n value of f %d",f);
	return 0;
}
