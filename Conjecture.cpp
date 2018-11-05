#include <iostream>
using namespace std;
int main(){
	int x,count;
	cin>>x;
	do{
		if(x%2==0){
			x/=2;
		}else{
			x = x*3+1;
		}
		count++;
	}while(x!=1);
	cout<<count<<endl;	
	return 0;
}
