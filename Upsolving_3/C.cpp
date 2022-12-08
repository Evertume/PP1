#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n, mn = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(__gcd(a[i], a[j]) > mn)
            {
                if(i != j)
                {
                    mn = __gcd(a[i], a[j]);
                }
            }
                
        }
    }
    cout << mn;
    
}
