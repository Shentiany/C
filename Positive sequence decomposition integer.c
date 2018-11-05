#include <stdio.h>
 int main(){
 	
 	int x;
 	scanf("%d",&x);
 	int t;
 	t = x;
 	int mask = 1;
 	
 	while(x > 9){
		x /= 10;
 		mask *= 10 ;	
	}
 	printf ("%d %d\n",t,mask);
 	do{
	    int d = t / mask;
		printf ("%d ",d);
		t = t % mask;
		mask /= 10;
		
	}while(mask > 0);
 	return 0;
 }
