#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
int a,b,m=0,k;
cin >> a >> b;
int arr[a][b];
for (int i=0; i<a; i++){
  for (int j=0; j<b; j++){
    cin >> arr[i][j];
  }
}
cin >> k;
for (int i=0; i<a; i++){
  for (int j=0; j<b; j++){
    if (m<arr[i][j]){
      m=arr[i][j];
    }
  }
} 

if (m>k){
  cout << "Penalty!";
}
else if (m<=k) {
  cout << "No penalty for today.";
}
}