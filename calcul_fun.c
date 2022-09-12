#include<stdio.h>
#include<stdlib.h>
int plus(int x , int y){
	int m;
	m = x+y;
	printf("%d + %d = %d",x,y,m);
	return m;
int minus(int x , int y){
	int m;
	m = x-y;
	printf("%d - %d = %d",x,y,m);
	return m;
int divide(int x , int y){
	int m;
	m = x/y;
	printf("%d / %d = %d",x,y,m);
	return m;
int multiply(int x , int y){
	int m;
	m = x*y;
	printf("%d * %d = %d",x,y,m);
	return m;			
}
int main(){
	int a,b;
	char op;
	int c=1;
	do{
		printf("Choose the first number:");
		scanf("%d",&a);
		printf("Choose the operator :");
		scanf("%c", &op);
		printf("Choose the second number:");
		scanf("%d",&b);
		switch(op){
			case '+':
				plus(a,b);
				break;
			case '-':
				minus(a,b);
				break;
			case '/':
			    divide(a,b);
				break;
			case '*':
				multiply(a,b);
				break;
			default:
				printf("something wrong");			
		} 
	}
	while (c == 1);
	
return 0;
}

