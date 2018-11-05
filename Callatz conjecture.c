#include <stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	int count = 0;
	while(i != 1){
		count++;
		if (i%2 == 0){
			i = i/2;
		}else{
			i  = (3*i + 1)/2; 
		}
	}
	printf("%d",count);
	return 0;
}
