#include <stdio.h>
int main()
{
	int x;
	double sum = 0;
	int count = 0;
	int number[100];
	scanf("%d",&x);
	while (x != -1){
		number[count] = x;
		sum += x;
		count ++;
		scanf("%d",&x);
	}
if( count > 0){
	int i;
	double average = sum / count;
	for ( i = 0; i < count; i++){
		if ( number[i] > average){
			printf("%d",number[i]);
		}
	}	
}	
		
}  
