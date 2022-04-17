#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	byte ans=0;
	while(i<32){
		int bit=n&1;
		if(bit==0){
			bit=1;
		}
		else{
			bit=0;
		}
		ans=(bit*pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	byte binary= ans+1;
	cout<<binary;
}
