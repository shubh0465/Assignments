#include <stdio.h>
#include <math.h>
int main(){
int x,a,p,q;
printf("enter the value of a\n");
scanf("%d",&a);

for(x=0;x<a;x++){p=x/10;q=x%10;
	if((p+q)%7==0)
		printf("%d ",x);
}


}