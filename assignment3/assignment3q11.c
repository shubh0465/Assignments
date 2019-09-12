#include <stdio.h>
int main(){
float a,b,c;
printf("enter the value of a b c\n");
scanf("%f %f %f",&a,&b,&c);
if((a>b && a<c)|| (a>c && a<b))
	printf("%.1f",a);
else if((b>c && b<a)||(b<c && b>a))
	printf("%.1f",b);
else{
	printf("%.1f",c);
}

}