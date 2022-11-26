#include <iostream>  
using namespace std;  
int main() 
{ 
 int a,b=0,c=0; 
 cin >> a; 
 int arr[a]; 
 for (int i=0;i<a;i++){ 
  cin >> arr[i]; 
 } 
 for (int i=0;i<a;i++){ 
  if (arr[i]%2==0){ 
    b++; 
  } 
  else { 
    c++; 
  } 
 } 
 int art[b]; 
 int ard[c]; 
 for (int k=0,l=0;k<a;k++){ 
  if (arr[k]%2==0){ 
    art[l]=arr[k]; 
    l++; 
  } 
 } 
for (int n=0,p=0;n<a;n++){ 
  if (arr[n]%2!=0){ 
    ard[p]=arr[n]; 
    p++; 
  } 
} 
 for (int j=0; j<b; j++){ 
  cout << art[j] << " "; 
 } 
 for (int h=0; h<c; h++){ 
  cout << ard[h] << " "; 
 }  
 }