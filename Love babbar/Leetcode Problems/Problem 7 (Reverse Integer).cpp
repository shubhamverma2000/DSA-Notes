#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n; 
	if(n>(pow(2,31)-1) | n<-(pow(2,31))){
		cout<<0<<endl;
	}    //123
	int ans=0;
	while(n!=0){ 
		int digit= n%10;
		ans=(ans*10)+digit;
		n=n/10;	
	}
	cout<<ans;
}
	/*
	int count=0;
	int arr[3];            //Probem 1- We do not know the sign so it is hardcorded (Pseudocoded for the solution, hence wrong)
	
	if(n>(pow(2,31)-1) | n<-(pow(2,31))){
		cout<<0<<endl;
	}
	else{
		while(n!=0){
		int digit=n%10;
		arr[count]=digit;
		n=n/10;
		count++;
	   	}
	   	
		int sum=0,k=0;
		int power=count-1;
		while(k<=(count-1)){
			sum=(arr[k]*pow(10,(power)))+sum;
			k++;
			power--;
		}
		cout<<sum;	
	}
	
	*/

