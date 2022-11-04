#include <iostream>
#include <cstring>
using namespace std;
int main()  {
    int i;
    char s[1000000];
    cin >> s;
    for (i=0; i<strlen(s); i++)   {
        putchar(toupper(s[i]));
    }
    return 0;
}