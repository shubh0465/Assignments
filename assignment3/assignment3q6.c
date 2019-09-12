#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d;
	printf("enter the values of a,b,c for eqn a*x*x+b*x+c=0:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	printf("\n value of d is %f",d);
	if(d>0)
		printf("\nroots of eqn are %f %f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	else if(d=0)
		printf("\nroot of eqn is %f",-b/(2*a));
	else{
		printf("\nroots are imaginary");
        printf("\nreal part of roots is %f",-b/(2*a));
		printf("\nimaginary parts of roots are %f %f",-sqrt(-d)/(2*a),sqrt(-d)/(2*a));
	}
	}
					
					

				
			
		
	


