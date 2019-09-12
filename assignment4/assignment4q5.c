#include <stdio.h>
#include <math.h>
int main(){
int x,a;
printf("enter the value of a\n");
scanf("%d",&a);

for(x=21;x<a;x++)
	if(x<a && x%21==0)
		printf("%d ",x);


}