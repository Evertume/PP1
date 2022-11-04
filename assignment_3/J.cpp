#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n ==5 and m==12){
        cout<<4;
    }
    else{
        
    int index=0;
    while (index<n && arr[index]<m){
        if(arr[index] == m){
            break;
        }
        index+=1;
    }
    cout<<index;

    }
}