#include <stdio.h>
int main(){
	int price;
	int amount = 0;
	while(amount < 10){
		printf("��Ͷ�ң�");
		scanf("%d",&price);
		amount = price + amount;
		price = 0;
	}
	printf("���㣺%d",amount-10);
	return 0; 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}  
