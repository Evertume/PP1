#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
string a;
int m=0,s;
cin >> a;
for (int i=0; i<a.size(); i++){
  if(m<a[i]-'0'){
    m=a[i]-'0';
  }
}
s=m;
for (int i=0; i<a.size(); i++){
  if(a[i]-'0'<m){
    m=a[i]-'0';
  }
}
cout << s << " " << m;
}