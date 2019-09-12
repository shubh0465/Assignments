#include <stdio.h>
int main(){
	int x,y;
	for(y=0;y<11;y++){
		for(x=0;x<17;x++){
			if(y==0 || y==10){
				printf("0");
			}
			if(y==1 || y==9){
				if(x<6 || x>11)
					printf("0");
				else{
					printf("*");
				}
			}
			if(y==2 || y==8){
				if(x<4 || x>12)
					printf("0");
				else{
					printf("*");
				}
		    }
		    if(y==3 || y==7){
		    	if(x<3 || x>13)
		    		printf("0");
		    	else{
		    		printf("*");
		    	}
		    }
		    if(y>3 && y<7)
		    	if(x<2 || x>14)
		    		printf("0");
		    	else{
		    		printf("*");
		    	}}
		printf("\n");}
		    
	}
