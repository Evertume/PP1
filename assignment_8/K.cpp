#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


int main(){
    int n, a;
    cin >> n;
    vector<int> v;
    int sum = 0;
    for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    cout << sum;
}