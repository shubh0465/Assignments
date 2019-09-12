#include <stdio.h>
int main(){
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a==b&&b!=c||a!=c)
printf("%f",c);
else if(a==c&&c!=b||a!=b)
printf("%f",b);
else{
	printf("%f",a);
}


	

}