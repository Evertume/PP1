#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin >> n;
string s;
map <string, int> m;
for(int i = 1; i <= n; i++)
{
    cin >> s;
    if (!m[s]) m[s] = i;
}
for (auto i : m)
{
    cout << i.first << " " << i.second << "\n";
}
}