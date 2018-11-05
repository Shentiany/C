#include <iostream>
#include <cmath>
using namespace std;
int function(int x){
	if(x<-10)
		return 2*x+1;
	else if(x>10)
		return  exp(x);
	else
		return 3*x*x+pow(5.0, x)-6;
}
int main(){
    int x;
	double result;
	cin>>x;
	result = function(x);
	cout<<result<<endl;
	return 0;
}
