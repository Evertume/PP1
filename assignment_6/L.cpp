#include <iostream>
using namespace std;

bool Validate(string str, int a){
    int num=0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= '0' and str[i] <= '9') num++;
        else num = 0;
        if(num == a) return true;
    }
    return false;
}

int main(){
    string s; 
    cin >> s;
    int n; 
    cin >> n;
    cout << (Validate(s, n) ? "Valid" : "Not valid");
}
  