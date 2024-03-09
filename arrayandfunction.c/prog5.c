/*5. WAP to take two Array input from user and sort them in
ascending ordescending order as per user’s choice*/

#include<stdio.h>
int sort(int choice){
	int i,j;
	int arr[5],tem;
	if(choice == 1){
		for(i=0;i<5;i++){
			printf("enter the array %d:",i);
			scanf("%d",&arr[i]);
			
		}
		
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(arr[i]>arr[j]){
					
					tem = arr[i];
				    arr[i]=arr[j];
				    arr[j]=tem;
				}
				
			}
		}
		for(i=0;i<5;i++){
			printf("%d\n",arr[i]);
		}
		
	}
	else if(choice == 2){
			for(i=0;i<5;i++){
			printf("enter the array %d:",i);
			scanf("%d",&arr[i]);
			
		}
		
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(arr[i]<arr[j]){
					
					tem = arr[i];
				    arr[i]=arr[j];
				    arr[j]=tem;
				}
				
			}
		}
		for(i=0;i<5;i++){
			printf("%d\n",arr[i]);
		}
}
		
		else{
			printf("invalid choice");
			
		}
	}


int main(){
	
	int choice;
	printf("1.Asending\n");
	printf("2.decending\n");
	
	printf("enter your choice 1 or 2 : ");
	scanf("%d",&choice);
	sort(choice);
	
	
}
