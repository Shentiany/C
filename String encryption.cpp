#include <iostream>
using namespace std;
int main(){
	char 'x';
	int y;
	while(x!='#'){
		cin>>x;
		if(x>='0'&&x<='9'){
			y = 'x'+3;
		}else if(x>='a'&&x<='z'){
			y = 'x'+2;			
		}else if(x>='A'&&x<='Z'){
			y = 'x'+2;
		}else{
			y = x;
		}
	}
	cout<<y<endl;	
	return 0;
}
