#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int a,b;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a;i++){
        cin >> arr[i];
    }
    sort(arr,arr+a);
    int cnt = 0;
    for(int i = 0; i < a;i++){
        if(arr[i]== arr[i+1]){
            cnt++;
        }
    }
    int out[a-cnt];
     for(int i = 0,k=0; i < a;i++){
        if(arr[i]!= arr[i+1]){
            out[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < a-cnt; i++)
    {
        cout << out[i] << " ";
    }
    
    return 0;
}