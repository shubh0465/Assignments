#include <stdio.h>
void main(){
	int x,y;
	
	
	for(y=0;y<4;y++){
		for(x=0;x<4;x++){
			if(y%2 == 1)
				printf("*0000");
			else 
				printf("0****");
		}
		printf("\n");
	}
}