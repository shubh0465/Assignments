#include <stdio.h>
#include <math.h>
int main(){
int x,a;
printf("enter the value of a\n");
scanf("%d",&a);

for(x=1;x<a;x++)
	if(x%2==0 && !(x%3==0 || x%5==0) && x<a)
		printf("%d ",x);


}