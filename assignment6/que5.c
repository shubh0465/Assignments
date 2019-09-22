#include <stdio.h>
int main(){
	int i,j;
	for(i =65;i<69;i++){
		for(j=0;j<69-i;j++){
			printf("%c",i);
		}
	}
}