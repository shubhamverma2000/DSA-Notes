#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m=n;
	int ans=0;
	int mask=0;
	if(n==0){
		cout<<1;
	}
	while(n!=0){
		mask=mask<<1 | 1;
		m=m>>1;
	}
	ans= (~n) & mask;
	cout<<ans;
}
