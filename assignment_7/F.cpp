#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int even_count = 0;
    for (int i = 0; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++)
    {
        even_count += ( s[i] - '0' ) % 2 == 0;
    }
    
    cout << even_count;
    
    return 0;
}