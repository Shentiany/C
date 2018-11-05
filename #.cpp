#include <iostream>
using namespace std;
int main(){
	int i,y;
	for(i=1;i<5;i+=2){
		for(y=1;y<=i;y++){
			cout<<"#";
		}
		cout<<endl;	
	}
	for(i=5;i>=1;i-=2){
		for(y=1;y<=i;y++){
			cout<<"#";
		}
		cout<<endl;
	}	
	return 0;
} 
