#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    map<int, int> m;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    for(auto i : m)
        if(i.second > 1)
        cnt++;
    cout << cnt;
}