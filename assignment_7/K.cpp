#include <iostream>  
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int max = 0;
    long n;
    cin >> n;

    while ( n > 0 )
    {
        int remainder = n % 10;
        if ( remainder > max )
            max = remainder;
    
        n /= 10;
    }
    cout << max;
}