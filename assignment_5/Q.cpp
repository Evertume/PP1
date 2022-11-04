#include <iostream>
#include <cstring>
using namespace std;
int main(){

    string s, t;
    cin >> s >> t;
    int n, i, m = 0;

    n = t.size()/s.size();
    for(i = 0; i < s.size(); i++){
            m++;
        }

    if(t.find(s) == string::npos){
        cout << "NO";
    }
    else if(n * m == t.size()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}