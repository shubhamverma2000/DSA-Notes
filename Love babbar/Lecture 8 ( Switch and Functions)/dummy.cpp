#include <iostream>
using namespace std;
void update(int a){
	a=a/2;
}
int main(){
	int a;
	cin>>a;
	update(a);
	cout<<a;
}
