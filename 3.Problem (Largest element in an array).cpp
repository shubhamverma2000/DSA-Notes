#include <iostream>
using namespace std;
int main(){
	int n ,max=0;
	cout<<"Tell the size of the array"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Mention the values of each elements"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]>=max){
			max=arr[i];
		}
		else{
			continue;
		}
	}
	
	cout<<"Largest element is: "<<max;
}
