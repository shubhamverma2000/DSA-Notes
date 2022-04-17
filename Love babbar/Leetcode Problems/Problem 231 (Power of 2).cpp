#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=1){
		if(n%2==0){
			n=n/2;
		}
		else{
			break;
		}
	}
	if(n==1 || n==0){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
}
