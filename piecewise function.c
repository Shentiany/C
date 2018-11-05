#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int k;
	int y;
	if(x > 0) {
		k = 1;
	}else if(x == 0){
		k = 2;
	}else{
		k = 3;
	} 
	switch(k){
		case 1:y = 1;break;
		case 2:y = 2;break;
		case 3:y = 3*x;break;
	}
	printf("%d",y);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
