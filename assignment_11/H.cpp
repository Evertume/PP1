#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
string s;
cin >> s;
for(int i = 0; i < s.size(); i++)
{
    if((s[i]-'A')+n > 25)
    {
        s[i] = (n-(26-(s[i]-'A')))+'A';
    }
    else
    {
        s[i] = ((s[i]-'A')+n)+'A';
    }
}
cout << s;
}