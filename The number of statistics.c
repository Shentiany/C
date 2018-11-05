#include <stdio.h>
int main(){
	const int number = 10;
	int i;
	int x;
	int count [number];
//	初始化数组 
	for (i = 0; i < number; i++){
		count[i] = 0;
	}
	scanf("%d",&x);
	while(x != -1){
	    if(x<10 && x>=0 ){
		   count[x]++;
        }
        scanf("%d",&x);
	} 
	for(i = 0; i < number; i++){
		printf("%d:%d\n",i,count[i]); 
	}
	return 0;
} 
