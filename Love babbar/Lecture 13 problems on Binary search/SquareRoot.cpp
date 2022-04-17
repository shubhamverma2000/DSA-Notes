#include<iostream>
using namespace std;

int squareRoot(int arr[], int key){
	int s=0,e=sizeof(arr)-1;
	int mid=s+(e-s)/2;
	int square;
	while(s<=e){
		square=mid*mid;
		if(square==key){
			return mid;
		}
		else if(square>key){
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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<=n;i++){
		arr[i]=i;
	}
	
	int value=squareRoot(arr,n);
	cout<<endl;
	cout<<value;

}
	
	

