#include <iostream>
using namespace std;
int main(){
	int a,b=1;
	a = 10;
	if(++a){
		cout<<b<<" ";
	}
	else{
		cout<<++b;
	}
	
	for(int i=0;i<=15;i+=2){
		cout<<i<<" ";
		if(i&1){
			continue;
		}
		i++;
	}
}
