#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int a[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j){a[i]=arr[i][j];}
        }
    }
    int max=a[0], c=1;
    for (int i=1; i<n; i++){
        if (max<a[i]){max=a[i]; c=i+1;}
    }
    cout<<"Maximum element is: "<<max<<" with coordinates: "<<c<<";"<<c;
}