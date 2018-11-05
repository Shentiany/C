#include <iostream>
using namespace std;
int main(){
	int x,amount;
	while(x!=0){
		cin>>x;
		if(x%2==0){
			amount+=x;
		}	
	}
	cout<<amount<<endl;
	return 0;
} 
