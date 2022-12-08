#include <iostream>
#include <algorithm>
using namespace std;
string removeNumbers(string str)
{
    int current = 0;
    int word;
    for(int i = 0; i< str.length(); i++){
        if(isalpha(str[i])){
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

    cout << removeNumbers(str) << endl;
}