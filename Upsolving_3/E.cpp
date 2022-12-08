#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findSum(string s)
{
    int sum = 0;

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}
int main(){
    string s;
    cin >> s;
    cout << findSum(s);
}