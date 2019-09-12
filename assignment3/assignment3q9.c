#include <stdio.h>
int main(){
float a,b,c,d,x;
printf("enter the value of a b c d x\n");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&x);
if(a==x)
	printf("x is equal to a");
else if(b==x)
	printf("x is equal to b");
else if(c==x)
	printf("x is equal to c");
else{
	printf("x is equal to d");
}


	

}