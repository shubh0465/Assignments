#include <stdio.h>
#include <math.h>
int main(){
int x,a;
printf("enter the value of a\n");
scanf("%d",&a);

for(x=0;x<a;x++)
	if(x<20 || (x>50 && x<70) || x>90)
		printf("%d ",x);


}