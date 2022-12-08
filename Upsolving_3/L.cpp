#include<iostream>
#include<string>
using namespace std;
char NextAlpha(char character)
{
    if (character == 'Z') return 'A';
    else if (character == 'z') return 'a';
    else if (character == ' ') return ' ';
    else if (character == '!') return '!';
    else if (character == '(') return '(';
    else if (character == ')') return ')';
    else if (character == ',') return ',';
    else if (character == '.') return '.';
    else if (character == '/') return '/';
    else if (character == '@') return '@';
    else if (character == '#') return '#';
    else if (character == '$') return '$';
    else if (character == '%') return '%';
    else if (character == '^') return '^';
    else if (character == '&') return '&';
    else if (character == '*') return '*';
    else if (character == '-') return '-';
    else if (character == '_') return '_';
    else if (character == '+') return '+';
    else if (character == '=') return '=';
    else if (character == '?') return '?';
    else if (character == '0') return '0';
    else if (character == '1') return '1';
    else if (character == '2') return '2';
    else if (character == '3') return '3';
    else if (character == '4') return '4';
    else if (character == '5') return '5';
    else if (character == '6') return '6';
    else if (character == '7') return '7';
    else if (character == '8') return '8';
    else if (character == '9') return '9';

    return character + 1;
}

int main() {

    string input;

    getline(cin, input);

    for (int i = 0; i < input.size(); i++)
    {
        input[i] = NextAlpha(input[i]);
    }

    cout << input;
    return 0;
}
