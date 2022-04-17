#include <iostream>
using namespace std;

int ap(int n){
	int ans= (3*n) +7;
	return ans;
}

int fibonacci (int n){
	int a=0;
	int b=1, num;
	int count=3;
	while(count<=n){
		num=a+b;
		a=b;
		b=num;
		count++;
	}
	
	return num;
}

int setbits(int a, int b){
	int sum=0;
	while(a!=0){
		int bit=a&1;
		if(bit==1){
			sum+=1;
		}
		a=a>>1;
	}
	
	while(b!=0){
		int bit=b&1;
		if(bit==1){
			sum+=1;
		}
		b=b>>1;
	}
	
	return sum;
}

int main(){
	int n,a,b;
	cin>>n;
	cout<<"Answer for AP is "<<ap(n)<<endl;
	
	cout<<"The "<<n<<"th Fibonacci Number is "<<fibonacci(n)<<endl;
	cout<<"Enter a and b "<<endl;
	cin>>a;
	cin>>b;
	cout<<"Number of set bits in a and b combined is "<<setbits(a,b)<<endl;
}
