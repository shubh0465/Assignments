#include <stdio.h>
#include <math.h>
int main(){
int x,a,i;
printf("enter the value of a\n");
scanf("%d",&a);

for(x=0;x<a;x++){i=x%10;
	if(i>=5&&i<=8)
		printf("%d ",x);
}


}