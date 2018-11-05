#include <iostream>
#include <math.h> 
using namespace std;
int main(){
	int x,result,n = 1;
	while(n<=20){
		result = pow(2,n)-1;
		n++;
		cout<<result<<endl;
	}
	return 0;
} 
