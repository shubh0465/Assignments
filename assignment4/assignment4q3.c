#include <stdio.h>
#include <math.h>
int main(){
int x,a;
printf("enter the value of a\n");
scanf("%d",&a);
for(x=0;x<a;x++)
	if((x<50 && x%2==0) || ((50<x && x<a)&&x%2==1))
		printf("%d ",x);


}