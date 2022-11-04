#include <iostream>
using namespace std;
int main(){
    string s, sub; cin >> s >> sub;

    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        if(sub[0] == s[i]){
            for(int j = 0; j < sub.size();j++){
                if (s[j + i] == sub[j]) cnt++;
            }
        }
        if(cnt == sub.size()){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}