#include <iostream>
#include <string>
using namespace std;
int Ali(string s)
{
    
        if (s == "1")
        {
           cout << "true";
        }
        else if (s == "0")
        {
            cout << "false";
        }
        else 
        {
            cout << s;
        }    
}
int main(){
    string d;
    cin >> d;
    Ali(d);
}