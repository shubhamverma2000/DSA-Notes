#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
        while(n!=0){
            int digit=n%10;
            
            if(digit==1){
                count+=1;
            }
            n=n/10;
        }
        cout<<count;
}

// Efficient Algo
/*
	int count=0;
        while(n!=0){
            if(n&1){       // & of binary number and 1 is 1 if 0&1 and , 0 if 0&1;
                count+=1;   
            }
            n>>1;         // Right Shift Operator- Shift each digit to the right in order to get the count.
        } 
        return count;
*/
