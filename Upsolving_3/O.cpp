#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 0;
    int max = 0;
    int m = 0;
    for(int i = 1 ; i != s.length() ; i++)
    {
        if(s[i - 1] == s[i])
        {
            a++;
        }
        else
        {
            a = 0;
        }
        if(max < a)
        {
            m = i;
            max = a;
        }
    }
    cout << s[m] << " " << max + 1;
}