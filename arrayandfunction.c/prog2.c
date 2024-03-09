/*2. WAP of Addition, Subtraction, Multiplication and Division using
Switchcase.(Must Be Menu Driven)*/


#include<stdio.h>
int main(){
	int choice;
	float num1,num2,result;
	printf("enter your choice\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.modulo\n");
	scanf("%d",&choice);
	
	printf("enter two numbers");
	scanf("%f %f", &num1, &num2);
	
	switch(choice){
		case 1:
			result = num1+num2;
			 printf("%f + %f = %f", num1, num2, result);
            break;
        case 2:
			result = num1-num2;
			 printf("%f - %f = %f", num1, num2, result);
            break;  
		case 3:
			result = num1*num2;
			 printf("%f * %f = %f", num1, num2, result);
            break;	
		case 4:
			if (num2 == 0) {
                printf("Error! Division by zero.");
            } else {
                result = num1 / num2;
                printf("%f / %f = %f", num1, num2, result);
            }
            break;  
        if (num2 == 0) {
                printf("Error! Division by zero.");
            } else {
                result = (int)num1 % (int)num2;
                printf("%f % %f = %f", num1, num2, result);
            }
            break;    
        default:
            printf("Error! Invalid operator.");
		
	}
	
}
