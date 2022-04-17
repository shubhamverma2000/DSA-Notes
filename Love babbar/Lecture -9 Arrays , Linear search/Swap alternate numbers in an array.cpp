#include<iostream>
using namespace std;
// Swap Alterante numbers in an array - {1,2,3,4,5} -> {2,1,4,3,5}

void swap_alternate(int arr[], int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}	
	}
}

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	swap_alternate(arr, 5);
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
