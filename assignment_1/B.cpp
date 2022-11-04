#include <iostream>
using namespace std;
int main(){

    int a, b;
    cin >> a;
    cin >> b;
    if(a >= -10000 && a <= 10000 && b>= -10000 && b<= 10000){
        cout << a + b;
    } else cout << "false";
}