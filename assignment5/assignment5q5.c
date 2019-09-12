#include <stdio.h>
void main(){
	int x,y;
	
	
	for(y=0;y<5;y++){
		for(int x=0;x<4;x++){
			if(y%2 == 1)
				printf("*0000");
			else 
				printf("*****");
		}
		printf("\n");
	}
}