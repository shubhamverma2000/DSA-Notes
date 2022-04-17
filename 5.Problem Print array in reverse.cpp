#include <iostream>
using namespace std;
int main()
{
	int arr[4], revarr[4];
	cout<<"Enter the values of elements in arr"<<endl;
	for(int i=0; i<4;i++){
		cin>>arr[i];
	}
	for(int i=3; i>=0;i--){
		cout<<arr[i]<<endl;
	}
	return 0;
}
