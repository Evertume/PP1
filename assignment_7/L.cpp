#include <iostream> 
using namespace std; 
 
char f(string s, int i, int acc){ 
    if(i == s.size()) return acc; 
    else if(s[i] == s[s.size() - i - 1]) return 1; 
    return 0; 
} 
 
int main(){ 
 
    string s; 
    cin >> s; 
 
    if(f(s, 0, '0') == 1) 
        cout << "Yes"; 
    else 
        cout << "No"; 
}