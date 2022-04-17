#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int count=1;
		int j=1;
		while(j<=(n-i)){
			cout<<" ";
			j+=1;
		}
		int k=1;
		while(k<=i){
			cout<<count;
			count+=1;
			k+=1;
		}
		count-=1;
		if(count==i){
			count-=1;
			while(count>=1){
				cout<<count;
				count-=1;
			}
		}
		cout<<endl;
		i+=1;
	}
}
