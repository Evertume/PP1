#include <iostream>  
using namespace std;  
int main() 
{ 
 string a; 
 int m=0,k; 
 cin >> a; 
 k = a[0] - '0'; 
 for (int i=1; i<a.size(); i++){ 
  m += a[i] - '0'; 
 } 
 if (m%10==k){ 
  cout << "YES"; 
 } 
 else { 
  cout << "NO"; 
 } 
}