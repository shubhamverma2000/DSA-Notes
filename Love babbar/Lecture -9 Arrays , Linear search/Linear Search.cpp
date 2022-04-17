#include<iostream>
using namespace std;
bool search(int arr[], int size, int key ){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[5], key;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cin>>key;
	bool found=search(arr , 5, key);
	if(found){
		cout<<"Number present"<<endl;
	}
	else{
		cout<<"Number absent"<<endl;
	}
	
}
