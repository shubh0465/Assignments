#include <stdio.h>
int main(){
	for(int i=0;i<6;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ",(j+1)*(j+2)/2);
		}
		printf("\n");
	}
}