#include <iostream>
using namespace std;

int pivot(int arr[], int n){
	int mid,s=0,e=n-1;
	mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else if(arr[mid]<arr[0]){
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	
	return s;
}

int binarySearch(int arr[],int n, int s, int e, key){
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

int search(int arr[],int key, int n){
	int pivotIndex=pivot(arr,n);
	if(key>=arr[pivotIndex]&& key<arr[n-1]){
		return binarySearch(arr,n, pivotIndex,n-1,key);
	}
	else{
		return binarySearch(arr,n,0, pivotIndex-1,key);
	}
}

int main(){
	int arr[]={8,9,10,1,3,4,6};
	int key= 4;
	int n=sizeof(arr);
	int final=search(arr,int key, int n);
	
	
}
