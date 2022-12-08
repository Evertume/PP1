#include <iostream>  
#include <bits/stdc++.h>
using namespace std;
 
int getSum(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        sum = sum + str[i] - 48;
    }
    return sum;
}
int main()
{
    string st;
    cin >> st;
    cout << getSum(st);
    return 0;
}