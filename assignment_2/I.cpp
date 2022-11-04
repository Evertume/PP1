#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, a[1000], c = 0, i;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] % 10 == 7)
        c++;
    
    }
    cout << c;
}