#include<iostream>
using namespace std;
int binarySearch(int arr[], int key){
	int s=0,e=sizeof(arr)-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}

int main(){
	int arr[]={1,3 ,4 ,7,8,10,11};
	int key=2;
	cout<<binarySearch(arr,key);
}
