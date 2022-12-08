#include<bits/stdc++.h> 
using namespace std; 
bool isTruth(string s) 
{ 
    for (int i = 0; i < s.size(); i++) 
    { 
        if (isdigit(s[i])) 
        { 
            return false; 
        } 
    } 
    return true; 
} 
int main(){ 
string str; 
while (cin>>str) 
{ 
        if (isTruth(str)) 
        { 
            cout<<str<<endl; 
        } 
         
} 
}