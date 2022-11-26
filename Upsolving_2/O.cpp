#include <iostream> 
using namespace std; 
int main()
{
int a,b,m=0,k=0;
cin >> a >> b;
int arr[a][b];
for (int i=0; i<a; i++){
  for (int j=0; j<b; j++){
    cin >> arr[i][j];
  }
}
for (int i=0; i<a; i++){
  for (int j=0; j<b; j++){
    if (j<b){
      m+=arr[i][j];
      k++;
    }
    if (k==b){
      cout << m/b << " ";
      k=0;
      m=0;
    }
    }
  }
}