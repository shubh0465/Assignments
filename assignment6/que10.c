#include <stdio.h>
void main(){
	int i,j;
	for(i =0;i<6;i++){
		for(j=0;j<i+1;j++){
			printf("%c",65+j);
		}
		printf("\n");
	}
}