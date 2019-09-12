#include <stdio.h>
#include <math.h>
int main(){
int x;

for(x=21;x<80;x++)
	if((x<40 && x%2==0) || (50<x &&x%2==1))
		printf("%d ",x);


}