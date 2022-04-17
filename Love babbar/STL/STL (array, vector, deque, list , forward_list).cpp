#include<iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	for(int i; i<5;i++){
		int a;
		cin>>a;
		cout<<endl;
		v.push_back(a);
		
		cout<<v.capacity()<<endl;
	    cout<<v.size()<<endl;
	}
	
	v.pop_back();
	for(int i:v){
		cout<<i<<endl;
	}
}
