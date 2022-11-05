#include <iostream>
#include <cmath>
using namespace std;

void percentage(float n, float m){
    float a;
    a = m*100/n;
    cout << a;
}

int main(){
float n;
float m;
cin >> n >> m;
percentage (n, m);
}