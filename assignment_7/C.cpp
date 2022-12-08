#include <iostream> 
using namespace std; 
 
string func(int begin, int end, int a[],int x){ 
int mid = (begin+end)/2; 
 
if(begin>end){ 
    return "No"; 
} 
 
if(x==a[mid]){ 
    return "Yes"; 
}else if(x>a[mid]){ 
    return func(mid+1, end, a, x); 
}else if(x<a[mid]){ 
    return func(begin, mid-1, a, x); 
} 
 
} 
 
int main(){ 
    int n; 
    cin>>n; 
    int a[n]; 
    for(int i = 0; i<n; i++){ 
        cin>>a[i]; 
    } 
    int x; 
    cin>>x; 
    cout<<func(0, n-1, a, x); 
}