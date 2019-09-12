#include <stdio.h>

int main(){
int x,y;

for(y=0;y<10;y++){
for(x=0;x<20;x++)
	if((x>7 && y<3)||(y>=3 && y<7)||(x<15 && y>=7))
		printf("*");
	else
		printf("0");
	printf("\n");

		
}


}