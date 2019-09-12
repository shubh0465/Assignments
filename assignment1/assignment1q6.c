#include <stdio.h>
int main(){
	int a=0,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	b=a%100;
	printf("\n value of b %d",b);
	c=b/10;
	printf("\n value of secomd last digit number %d",c);
	return 0;
}
