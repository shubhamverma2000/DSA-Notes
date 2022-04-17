#include<iostream>
using namespace std;

int swap_alternate(int arr[], int size){
	for(int i=0;i<size;i+=2){
		swap(arr[i],arr[i+1]);
	}
	return arr;
}

int main(){
	int arr[5];
	for(int i=0;i<size;i++){
		cin>>arr[i]<<" ";
	}
	swap_alernate(arr, 5);
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
