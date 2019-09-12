#include <stdio.h>
#include <math.h>
int main(){
int x;
for(x=21;x<80;x++)
	if(x<40 || ((50<x && x<80)&&x%2==0))
		printf("%d ",x);


}