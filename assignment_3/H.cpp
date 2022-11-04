#include<iostream>

using namespace std;

int main(){
    long n,l,r,i;
    cin >> n >> l >> r;
    long arr[n];
    long sum = 0;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i = l-1; i < r;i++){
        sum+=arr[i];
    }
    cout << sum;
return 0;

       
}