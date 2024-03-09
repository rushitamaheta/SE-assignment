/*2. Write a program to make Simple calculator (to make addition,
subtraction,multiplication, division and modulo)*/

#include<stdio.h>
int main(){

	float a,b,sum=0,sub,div,mod,mul;
	printf("enter value of a and b\n");
	scanf("%f %f",&a ,&b);

    sum = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	mod = (int)a% (int)b;
	printf("sum is : %f\n",sum);
	printf("substraction is : %f\n",sub);
	printf("multiplication is : %f\n",mul);
	printf("division is : %f\n",div);
	printf("modulo is : %f",mod);
	
	
}

