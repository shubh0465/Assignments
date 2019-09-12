#include <stdio.h>
void main(){
	int x,y;
	for(y=0;y<10;y++){
		for(x=0;x<15;x++){
			if(y%2==0){
				if(y>1 && x<y)
					printf("*");
				else if(x<15)
						if(x%2==0&&x!=y)
							printf("*");
						else
							printf("0");
			}else if(x<y-1)
					 printf("0");
				     else if(x<15)
				  			 if(x%2==0&& x!=y-1)
								printf("*");
					         else
								printf("0");
		}
		printf("\n");
	}
}