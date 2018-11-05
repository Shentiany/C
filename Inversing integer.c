#include <stdio.h>
int main (){
	int x;
	int last;
	int result = 0 ;
	scanf("%d",&x);
	while( x > 0){
		last = x%10;
		result = result*10 + last;
		printf ("%d",result);
		x /= 10;
	}
//	printf ("%d",result);
	return 0;
} 
