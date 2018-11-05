#include <stdio.h>
int main(){
	int bjtime,bjhour,uhour,result,uminute;
	scanf("%d",&bjtime);
	bjhour = bjtime / 100;
	if(bjhour - 8 < 0){
		uhour = bjhour + 16; 
	} else{
		uhour = bjhour - 8;
	}
	uminute = bjtime % 100;
	printf("%d",result = uhour*100 + uminute);
	return 0;
} 
