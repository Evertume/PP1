#include <iostream>
#include <cstring>
using namespace std;
int main()  {
    int b = 0, a = 0, i;
    char s[1000000];
    cin >> s;

    for (i=0; i<strlen(s); i++)   {
        if (isupper(s[i]))  {
            b++;
        } else {
            a++;
        }
    }

    cout << a << " " << b;

    return 0;
}