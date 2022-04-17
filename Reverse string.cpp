#include <iostream>
using namespace std;

int length (char input[]){
	
	int count=0;
	for(int i=0; input[i]!='\0';i++){             //'\0' is the null character
		count++;
	}
	return count;
}

void reverse(char arr[]){
	
	int s=0;
	int e=length(arr)-1;
	
	while(s<e){
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
	
	cout<<arr;
}
int main(){
	char arr[100];
	cin.getline(arr,100); 
	cout<<arr<<endl;
	reverse(arr);
	return 0;
}
