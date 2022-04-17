#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int n;
	cin>>n;
	for(int i=2;i<=n;){
		sum+=i;
		i=i+2;
	}
	cout<<sum;
}
