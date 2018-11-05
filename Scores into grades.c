#include <stdio.h>
int main (){
	int score;
	scanf("%d",&score);
	int result; 
	result = score/10; 
	switch(result){
		case 10:
		case 9:printf("A\n");break;
		case 8:
		case 7:printf("B");break;
		case 6:printf("C");break;
		default:printf("D");break;	
	}
	
//	case后面要有空格 
	
	
}
