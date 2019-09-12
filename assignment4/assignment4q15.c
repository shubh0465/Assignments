#include <stdio.h>
#include <math.h>
int main(){
int x,p;


for(x=0;x<100;x++){p=x/10;
	if((p%2==0 && x%2==1)||(p%2==1 && x%2==0))

		printf("%d ",x);
}


}