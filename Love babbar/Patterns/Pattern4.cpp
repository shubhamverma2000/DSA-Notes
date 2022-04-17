#include <iostream>
using namespace std;
int main(){
	int n,i=1, count=0;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=n){
			count+=1;
			cout<<count<<" ";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
}
