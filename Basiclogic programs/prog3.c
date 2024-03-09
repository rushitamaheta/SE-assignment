/*3. WAP to Find Area And Circumference of Circle*/
#include<stdio.h>
int main(){
	float radius,area,circumference;
	printf("enter radius");
	scanf("%f",&radius);

	area = (3.14)*radius*radius;
		printf("%f",area);
    circumference = 2*(3.14)*radius;
		printf("%f",circumference);		

}
