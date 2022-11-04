#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if ( n > k )
    {
        cout << "1";
        return 0;
    }
    else if ( n < k  )
    {
        cout << "2";
        return 0;
    }
    else 
        cout << "0";
    return 0;
}