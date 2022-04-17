#include <iostream>
using namespace std;
int main(){
	int n, i=1;
	cin>>n;	
	while(i<=n){
		char start= 'A'+n-i;
		int j=1;
		while(j<=i){
			cout<<start<<" ";
			start+=1;
			j+=1;
		}
		cout<<endl;
		i+=1; 	
	}
}
