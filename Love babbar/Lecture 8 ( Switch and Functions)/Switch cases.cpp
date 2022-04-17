#include <iostream>
using namespace std;
int main(){
	int a,b;
	char op;
	while(1){
		cin>>a;
		cin>>b;
		cout<<"Choose '+' for addition"<<endl;
	    cout<<"Choose '-' for subtraction"<<endl;
	    cout<<"Choose '*' for Multiplication"<<endl;
	    cout<<"Choose '/' for division"<<endl;
	    cout<<"Choose '%' for getting remainder"<<endl;
	    cout<<"Choose 0 to exit"<<endl;
	    cin>>op;
		switch(op){
			case '+':
				cout<<"Sum= "<<a+b<<endl;
				break;
			
			case '-':
				cout<<"Difference= "<<a-b<<endl;
				break;
				
			case '*':
				cout<<"Multiplication = "<<a*b<<endl;
				break;
				
			case '/':
				cout<<"Answer= "<<a/b<<endl;
				break;
				
			case '%':
				cout<<"Remainder= "<<a%b<<endl;
				break;
				
			case '0':
				exit(0);
			default:
				cout<<"Please Enter a Valid Operation"<<endl;					
		}
	}
}
	
