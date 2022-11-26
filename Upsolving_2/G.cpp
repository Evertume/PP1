#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n,m,d,a; 
    cin>>n>>m>>d; 
    n=ceil(sqrt(n)); 
    m=sqrt(m); 
    if(d==1){ 
        for(n=n; n<=m; n++){ 
            a=pow(n,2); 
            cout<<a<<" "; 
        } 
    } 
    else{ 
        for(m=m; m>=n; m--){ 
            a=pow(m,2); 
            cout<<a<<" "; 
        } 
    } 
     
}