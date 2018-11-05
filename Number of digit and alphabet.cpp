#include <iostream>
using namespace std;
int main(){
	char x; 
	int alphabetNumber,digitNumber,count;
	while(x!='#'){
		cin>>x;
		if(x>='0'&&x<='9'){
		digitNumber++;
		}else{
		alphabetNumber++;
		}
	} 
	cout<<digitNumber<<endl<<alphabetNumber<<endl;
	return 0;
} 
