#include <iostream>
using namespace std;
int main(){
int odd = 0, even = 0, num, temp;
cin>>num;
while(num>0){
   temp = num%10;
   if(temp&1) odd++;
   else even++;
   num /= 10;
}

if(even && !odd) cout<<"Valid";
else cout<<"Not valid";
}