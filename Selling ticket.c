#include <stdio.h>
int main(){
	int price;
	int amount = 0;
	while(amount < 10){
		printf("ÇëÍ¶±Ò£º");
		scanf("%d",&price);
		amount = price + amount;
		price = 0;
	}
	printf("ÕÒÁã£º%d",amount-10);
	return 0; 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}  
