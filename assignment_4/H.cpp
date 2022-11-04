#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,e;
    c=0;
    d=0;
    cin>>a>>b;
    int ar[a];
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
            c=c+arr[i][j];
            
          }
        ar[i]=c;
        c=0;
    }
    int min=ar[0];
    e=1;
    for(int i=1;i<a;i++){
      if(min>ar[i]){min=ar[i];e=i+1;}
      
    }
    cout<<e;

}