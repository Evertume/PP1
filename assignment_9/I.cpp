#include <iostream>
#include <map>
using namespace std;
void user(){
int n;
cin >> n;
string s;
map <string, bool> m;
for(int i = 0; i < n; i++)
{
    cin >> s;
    if (!m[s])
    {
    cout << "new user added\n";
    }
    else
        cout << "user already exists\n";
        m[s]++;
}
}
int main(){
    user();
}