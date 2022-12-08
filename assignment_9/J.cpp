#include <iostream>
#include <map>
using namespace std;
int main() {
int n;
cin >> n;
map <string, int> m;
string s;
for (int i = 0; i < n; i++)
{
    cin >> s;
    int x;
    cin >> x;
    if (!m[s]) 
    m[s] = x;
    else m[s] += x;
}
for (auto i : m)
cout << i.first << " " << i.second << endl;
return 0;
}