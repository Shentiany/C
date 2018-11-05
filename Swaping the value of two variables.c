#include <stdio.h>
void swap_1(int a,int b);
void swap_2(int a,int b);
void swap_3(int a,int b);
void swap_4(int a,int b);
void swap_5(int *a,int *b);

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap_5(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}





void swap_1(int a,int b){
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n",a,b);
}

void swap_2(int a,int b){
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n",a,b);
}

void swap_3(int a,int b){
	a = a * b;
	b = a / b;
	a = a / b;
	printf("%d %d\n",a,b);
}

void swap_4(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d %d\n",a,b);
}

void swap_5(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}
