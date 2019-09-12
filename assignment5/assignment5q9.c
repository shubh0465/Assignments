#include <stdio.h>
void main(){
	int x,y;
	for(y=0;y<9;y++){
		for(x=0;x<20;x++){
			if(y<3)
				printf("*");
			else if(x+y>7&&x-y<4)
					printf("0");
				else
					printf("*");
		}
		printf("\n");
	}
}