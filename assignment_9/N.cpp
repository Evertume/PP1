#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
int a[1111];
map<int, int> m;
cin >> n;
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    m[a[i]] = 1;
}
int ans = 0;
for(int i = 0; i < n; ++i)
for(int j = 0; j < i; ++j)
if(m[a[i]^a[j]])
ans++;
cout << ans;
return 0;
}