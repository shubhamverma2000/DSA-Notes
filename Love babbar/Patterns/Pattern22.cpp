#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=(n-i+1)){
			cout<<j;
			j+=1;
		}
		int k=1;
		while(k<=(i-1)){
			cout<<"*";
			k+=1;
		}
		j=1;
		while(j<=(i-1)){
			cout<<"*";
			j+=1;
		}
		int count=i;
		k=1;
		while(k<=(n-i+1)){
			cout<<(n-count+1);
			count+=1;
			k+=1;
		}
		cout<<endl;
		i+=1;
	}
}
