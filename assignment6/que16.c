#include <stdio.h>
int main(){
	int i,j;
	for(i =0;i<6;i++){
		for(j=0;j<6-i;j++)
			printf("%c",65+i*j+j);
		printf("\n");
	}
}