#include <iostream>
using namespace std;
int main()
{
	int a;
	int i;
	cin>>a;
	for(i=2;i<a;i++)
	{
		if(a%i==0){
			cout<<"Non prime"<<endl;
			break;
		}
	}
	if(i==a){
		cout<<"Prime number"<<endl;
	}
	return 0;
}
