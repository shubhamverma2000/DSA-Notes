#include <iostream>
using namespace std;

bool isPossible(int arr[],int size,int meter, int mid){
	int sum=0;
	for(int i=0;i<size;i++){
		if(sum+arr[i]-mid<=meter && arr[i]>=mid){
			sum+=arr[i]-mid;
		}
		else if(arr[i]<mid){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

int main() {
	int size, meter;
	cin>>size;
	cin>>meter;
	// your code here
	int arr[size], max=-1;
	for(int i=0; i<size; i++){
		cin>>arr[i];
		if(max<arr[i]){
			max=arr[i];
		}
	}
	
	int s=0,e=max;
	int ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isPossible(arr,size,meter,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;	
	}
	cout<<ans;
	
	return 0;
}
