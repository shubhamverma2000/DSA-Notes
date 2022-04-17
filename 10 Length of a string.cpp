#include <iostream>
using namespace std;

int length (char input[]){
	int count=0;
	for(int i=0; input[i]!='\0';i++){             //'\0' is the null character
		count++;
	}
	return count;
}
int main()
{
	char name[100];
	cout<<"ENter your name: "<<endl;
	cin>>name;
	
	cout<<length(name);
	return 0;
}
