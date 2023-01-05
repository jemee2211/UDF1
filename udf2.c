#include<stdio.h>

void div(int n){
	
	
	
	if(n%3 ==0 && n%5 ==0){
		
		printf("Number is divisible by 3 and 5");
	}
	else{
		
		printf("Number is not divisible by 3 and 5");
	}
	
}
void main(){
	
	int m;
	
	printf("Enter Number:");
	scanf("%d",&m);
	
	div(m);
	
	
}
