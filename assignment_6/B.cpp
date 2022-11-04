#include <iostream>
using namespace std;
int main(){
long a[10000], b[10000], c[10000], n, i;
cin >> n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
    c[i]= abs(b[i] - a[i]);
    cout<<c[i]<<" ";
}

}