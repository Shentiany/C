#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int x;
	srand(time(0)); 
	int i = rand()%100+1;
//	rand()Ϊһ���������%100Ϊ����������ȡ�ࡣ���Ϊ��λ���� 
	int count = 0; 
	do{
		count++;
		printf("��������Ҫ�µ�����:\n"); 
		scanf("%d",&x);
		if (i > x){
			printf("ƫС\n"); 
		}
		if (i < x){
			printf("ƫ��\n");
		}
	
	}while(i != x);
    printf("��ϲ�㣬�¶��ˡ���һ������%d��",count);	
    return 0;




}





//print()��β��Ҫ��;;;;; 
 


