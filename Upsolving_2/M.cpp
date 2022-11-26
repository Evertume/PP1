#include <iostream> 
#include <cmath>  
using namespace std;  
int main() 
{ 
 long long a,b,m=0; 
 cin >> a >> b; 
 for (int i=-60; i<=60; i++){ 
  if (a*pow(2,i)==b){ 
    cout << "YES" << " " << i; 
    m++; 
  } 
 } 
 if (m==0){ 
  cout << "NO"; 
 } 
}

