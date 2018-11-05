#include <stdio.h>
int main (){
	int x ;
	int count;
	scanf("%d",&x);
	int t = x;
	while(x > 1){
		x = x/2;
		count++;
	}
	printf("%d是log2的%d",t , count);
	
}

 
 
 
// 其中的第九行int x = t是关键 
