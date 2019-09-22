#include <stdio.h>
int main(){
	int i,j,k;
	for( i =0;i<6;i++){
		for( k=0;k<6-i;k++){
			for( j=0;j<=i;j++){
				printf("%c",65+k+i);
			}
		}
		printf("\n");
	}
}