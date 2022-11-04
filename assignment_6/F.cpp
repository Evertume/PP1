#include <iostream>
using namespace std;

bool Validate(string str, int num){
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= '0' and str[i] <= '9') num--;
        if(num == 0) return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    int n; cin >> n;
    cout << (Validate(s, n) ? "YES" : "NO");
}
    