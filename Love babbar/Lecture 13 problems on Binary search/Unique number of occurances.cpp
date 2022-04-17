#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++) cin>>a[i];   
    int visited = -1;    
        for(int i = 0; i < n; i++){    
        int count = 1;    
        for(int j = i+1; j < n; j++){    
            if(a[i] == a[j]){    
                count++;        
                b[j] = visited;    
            }    
        }    
        if(b[i] != visited)    
            b[i] = count;  
        else b[i] = 0;  
    } 
    
    int flag=0;
    sort (b, b + n);
    for(int i=0; i<n; i++)
    {
        if(b[i]==b[i+1] && b[i]!=0)
        {
            flag=1;
            break;
        }  
    }
    if(flag==0) cout<<"True";
    else cout<<"False";
}
