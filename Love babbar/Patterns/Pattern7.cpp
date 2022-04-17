#include <iostream>
using namespace std;
int main(){
	int n;
    cin>>n;
	int i=1, count=0;
	while(i<=n){
		int j=1;
		while(j<=i){
			count+=1;
			cout<<count<<" ";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
}
