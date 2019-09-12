#include <stdio.h>
void main(){
	int x,y;
	for(y=0;y<10;y++){
		for(x=0;x<20;x++){
			if(y%2==0)
				printf("*");
			else if(y==1 || y==3)
				printf("0");
			else if((y==5 || y==7 || y==9)&&(x<4 || x>13))
				printf("0");			
			else
				printf("*");


			
		}
		printf("\n");
	}
}