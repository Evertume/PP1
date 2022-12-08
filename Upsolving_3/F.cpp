#include <iostream>
#include <algorithm>
using namespace std;
string remove(string str)
{
    int current = 0;
    int word;
    for(int i = 0; i< str.length(); i++){
        if(isalpha(str[i]) && islower(str[i])){
            str[current] = str[i];
            current++;
        }
        
    }

    return str.substr(0,current);
}

int main()
{
    string str;
    getline(cin,str);

    cout << remove(str) << endl;
}