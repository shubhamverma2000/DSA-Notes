#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
	int ans=-1,s=0, e= size-1;
	int mid=s+ (e-s)/2;
	
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+ (e-s)/2;
	}
	
	return ans;
}

int lastOccurance(int arr[], int size, int key){
	int ans=-1,s=0, e= size-1;
	int mid=s+ (e-s)/2;
	
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+ (e-s)/2;
	}
	
	return ans;
}



int main(){
	int key1,key2;
	cout<<"Please Enter the keys to be searched."<<endl;
	cin>>key1;
	cin>>key2;
	int arr[]={1, 1, 2, 2, 4, 4, 5};
	int arr2[]={2, 2, 5,5, 5, 5, 8,9};
	int ans=firstOccurance(arr,7,key1);
	cout<<"First Occurance of arr "<<ans<<endl;
	ans=firstOccurance(arr2,8,key2);
	cout<<"First Occurance arr2 is "<<ans<<endl;
	
	int ans2=lastOccurance(arr,7,key1);
	cout<<"First Occurance of arr "<<ans2<<endl;
	ans2=lastOccurance(arr2,8,key2);
	cout<<"First Occurance arr2 is "<<ans2<<endl;
}
