#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){

    float a, b, c;
    cin >> a >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << setprecision(4) << c;
    return 0;
}