#include<stdio.h>
void cube(int n){
	

	n= n*n*n;
	printf("%d",n);
	
}

void main(){
	
	int m;
	
	
	printf("Enter Value:");
	scanf("%d",&m);

	cube(m);
	
}
