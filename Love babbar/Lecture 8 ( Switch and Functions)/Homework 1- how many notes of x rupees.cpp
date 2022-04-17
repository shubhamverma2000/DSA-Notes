#include <iostream>
using namespace std;
int main(){
	int amount, remainder;
		cout<<"Enter amount: "<<endl;
		cin>>amount;
	//Given an amount , tell how many notes of 100, 50, 20, 10 and 1 are required using switch statements
	while(1){
		
		int num100=amount/100;
		remainder=amount%100;
		int num50=remainder/50;
		remainder=remainder%50;
		int num20=remainder/20;
		remainder=remainder%20;
		int num10=remainder/10;
		remainder=remainder%10;
		int num1=remainder/1;
		
	 	int choice;
	 	cout<<"Choose the following"<<endl;
	 	cout<<"1. no. OF 100 Rupee notes"<<endl;
	 	cout<<"2. no. OF 50 Rupee notes"<<endl;
	 	cout<<"3. no. OF 20 Rupee notes"<<endl;
	 	cout<<"4. no. OF 10 Rupee notes"<<endl;
	 	cout<<"5. no. OF 1 Rupee notes"<<endl;
	 	cout<<"6. exit()"<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<num100<<endl;
				break;
			case 2:
				cout<<num50<<endl;
				break;
			case 3:
				cout<<num20<<endl;
				break;
			case 4:
				cout<<num10<<endl;
				break;
			case 5:
				cout<<num1<<endl;
				break;
			case 6:
				exit(0);
			default:
				cout<<"Enter a valid choice"<<endl;	
		}
	}
		
}
