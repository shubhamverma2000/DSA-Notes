#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"Enter the character";
	cin>>a;
	if(a>=97 && a<=122){
		cout<<"Lowercase"<<endl;
	}
	else if(a>=65 && a<=90){
	cout<<"Upper case"<<endl;
	}
	else{
		cout<<"Numeric Value"<<endl;
	}
}
