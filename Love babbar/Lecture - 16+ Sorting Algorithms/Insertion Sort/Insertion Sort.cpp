#include <iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		int j=i-1;
		int temp=arr[i];
		for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
