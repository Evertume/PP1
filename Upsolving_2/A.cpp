#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
    int n,suml=0,sumr=0,countl=0,countr=0; 
    int energl,energr; 
    cin>>n; 
    int arr[n]; 
    for(int i=0; i<n; i++){ 
        cin>>arr[i]; 
    } 
    for(int i=0; i<n; i++){ 
        if(arr[i]%2==0){ 
            countl++; 
            suml+=arr[i]; 
        }    
        else{ 
            countr++; 
            sumr+=arr[i]; 
        } 
    } 
    energl = countl*suml; 
    energr = countr*sumr; 
    cout << "Left hand magic power:" << " " << energl << endl; 
    cout << "Right hand magic power:" << " " << energr << endl; 
 }