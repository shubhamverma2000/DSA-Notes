#include <iostream>
using namespace std;
int main(){
	int size;
	int arr[size];
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++){
		int minIndex=i;
		for(int j=i+1;j<size; j++){
			if(arr[j]<arr[minIndex])
				minIndex=j;		
		}
		swap(arr[minIndex],arr[i]);
		
	}
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
