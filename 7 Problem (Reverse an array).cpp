#include <iostream>
using namespace std;
int main(){
	int arr[4], revarr[4];
	cout<<"Enter the values of elements in arr"<<endl;
	for(int i=0; i<4;i++){
		cin>>arr[i];
	}
	int start=0 , end=3;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	for(int i=0; i<4;i++){
		cout<<arr[i]<<endl;
	}
	return 0;	
	
}
