#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int x;
	srand(time(0)); 
	int i = rand()%100+1;
//	rand()为一个随机数，%100为对这个随机数取余。结果为两位数。 
	int count = 0; 
	do{
		count++;
		printf("请输入你要猜的数字:\n"); 
		scanf("%d",&x);
		if (i > x){
			printf("偏小\n"); 
		}
		if (i < x){
			printf("偏大\n");
		}
	
	}while(i != x);
    printf("恭喜你，猜对了。你一共猜了%d次",count);	
    return 0;




}





//print()结尾处要有;;;;; 
 


