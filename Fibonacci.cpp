#include <iostream>
using namespace std;
int Fibonacci(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 1;
	}
	else if(n>2){
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
} 
int main(){
	int n,i,result=0;
	for(i=1;i<=30;i++){
		result += Fibonacci(i);
	}
	cout<<result<<endl;
	return 0;
}


/*
1
1
2
3
5
*/
