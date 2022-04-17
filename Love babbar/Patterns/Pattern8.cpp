#include <iostream>
using namespace std;
int main(){
	int n, i=1, count=1;
	cin>>n;	
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<count<<" ";
			count+=1;
			j+=1;
		}
		cout<<endl;
		i+=1;
		count=i;
	}
}
