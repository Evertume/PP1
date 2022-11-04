#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int a[n], b=n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j-b){a[i]=arr[i][j];} 
        }
        b=b-2;
    }
    int sum=0;
    for (int i=0; i<n; i++){sum=sum+a[i];}
    cout << sum;
}