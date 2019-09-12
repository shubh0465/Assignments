#include <stdio.h>
#include<math.h>
int main(){
	float a,b,c,d;
	printf("enter the values odf a,b,c,d :\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
		printf("\nbiggest number is %f",a);
	else if(b>a && b>c && b>d)
		printf("\nbiggest number is %f",b);
	else if(c>a && c>b && c>d)
		printf("\nbiggest number is%f",c);
	else{
		printf("\n biggest number is%f",d);
	}
	}
		
	


