#include <stdio.h>
void main(){
	int x,y;
	
	
	for(y=0;y<6;y++){
		for(int x=0;x<3;x++){
			if(y%2 == 1)
				printf("*00*0**00**0*00");
			else 
				printf("000000000000000");
		}
		printf("\n");
	}
}