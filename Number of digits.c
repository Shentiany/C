#include <stdio.h>
int main ()
 {
	int x ;
	int y =0 ;
	scanf("%d",&x);
	do{
		x = x / 10;
		y = y+1;
		printf("x=%d\n",x);
		printf("y=%d\n",y);
	}while(x > 0);
		printf("%d",y);
		return 0;
	
	
	
	
	
	
	
	
}
