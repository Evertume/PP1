#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
string s; getline(cin,s); 
int n,cnt = 0; cin >> n; 
char last; 
char a[n]; 
map<char,int>m; 
for (int i = 0; i < n; i++) 
{ 
    cin >> a[i]; 
} 
 
for (int i = 0; i < n; i++) 
{ 
    cnt = 0; 
    for (int j = 0; j < s.size(); j++) 
{ 
    last = a[i]; 
    if (a[i] == s[j]) 
    { 
        cnt++; 
    }   
}  
    //cout << last << " " << "-" << " " << cnt << endl; 
   m.emplace(last,cnt); 
} 
auto it = m.begin(); 
    for (it = m.begin();it != m.end();it++) 
    { 
        cout << it -> first << " " << "-" << " " << it -> second << endl; 
    } 
     
 
 
 
}