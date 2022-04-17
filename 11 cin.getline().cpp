#include <iostream>
using namespace std;
int main(){
	char arr[100];	
//	cin.getline(arr,100);
//	cout<<arr;
 	
 	cin.getline(arr, 100, 'r');         //The third parameter is the delimiter, by default it is the '\n' but it is basically a break point.
    cout<<arr;                          //"Hello World" -> Hello Wo
	return 0;
}
