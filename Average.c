#include <stdio.h>
int main (){
	int amount ;
	int count ;
	int x;
	scanf("%d",&x);
	while(x != -1 ){
		count ++;
		amount = x + amount;
		scanf("%d",&x);
	}
	printf("%f",amount*1.0/count);
	} 
	
	
	
//	��ʮ�е�scanf("%d",&x);�ǹؼ������Ա���while��ѭ���� 
	
