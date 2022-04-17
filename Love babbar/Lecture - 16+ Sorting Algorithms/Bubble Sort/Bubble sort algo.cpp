#include <iostream>
using namespace std;
int main(){
	int size;
	int arr[size];
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	bool swapped= false;
	for(int i=1;i<=size;i++){
		for(int j=0;j<size-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
