#include<iostream>
using namespace std;
int main(){
	int n;
	int i;
	cin>>n;
 	for(i=2; i<n;i++){
 		if(n%i==0){
 			cout<<"Not a Prime number"<<endl;
 			break;
		}
	}
	if(i==n){
		cout<<"Prime Number"<<endl;
	}
	
}
