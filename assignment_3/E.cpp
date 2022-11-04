#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long n, i;
    cin >> n;
    long arr[n];
    long sum = 0;
    for (i = 0; i <n; i++)
    {
       cin >> arr[i];
       sum +=arr[i];
    }
    cout << sum;
    return 0;
}
