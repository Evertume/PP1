#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int sum = 0, i, len;
    char string1[100];
 
    
    scanf("%[^\n]s", string1);
        len = strlen(string1);
    for (i = 0; i < len; i++)
    {
        sum = sum + string1[i];
    }
    if (sum > 300)
    {
        cout << "It is tasty!";
    }
    else
        cout << "Oh, no!";
}
