#include <iostream>
using namespace std;
int main(){
	int a=4, b=5, c;
	c=a;
	a=b;
	b=c;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b;
	
	////////////////////////////////////////////
	
	int x=10,y=20;
	x=x+y;  //a=30
	y=x-y;  //b=10
	x=x-y;  //a=20
	
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
}
