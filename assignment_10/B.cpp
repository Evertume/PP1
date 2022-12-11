#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
unsigned long long npower(){
    static int i = -1;
    i++;
    unsigned long long x = 1;
    for(int j = 1; j <= i; j++) x *= i;
    return x;
}
int main(){
    int n;
    cin >> n;
    vector<unsigned long long> v(n + 1);
    generate(v.begin(), v.end(), npower);
    for (vector<unsigned long long> :: iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}