#include <iostream>
#include<math.h>
using namespace std;
int main () {
    int a;
    cin >> a;
        for (int i = 0; pow(2,i) <= a; i++){
            cout << pow(2,i) << " ";
        }
    return 0;
    
}