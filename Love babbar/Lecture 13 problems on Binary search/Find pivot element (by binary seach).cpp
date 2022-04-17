#include<iostream>
using namespace std;

int pivot(int arr[], int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){     //The middle element is in line 1
			s=mid+1;                       //Trick make a graph
		}
		else{          //The middle element is in line 2
			e=mid; 
		}
		mid=s+(e-s)/2;
	}
	return s;
}
int main(){
	int arr[]={7,8,1,4,5};
	cout<<pivot(arr,5);
}
