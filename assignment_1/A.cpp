#include <iostream>

using namespace std;
int main(){

/*int a,b; // обозначение 
float d,e; // 4 цифры после запятой
double f,g; // 8 цифр после запятой
// cin >> f >> g; // cin - ввод чисел
// cout << f / g << endl; // cout - вывод чисел // endl -  новая строка
cin >> a;
cout << a % 1000 << endl;
cout << a / 100 << endl;
return 0; // выход с кода*/

int a, b, c, d;

cin >> a;
cin >> b;

if(a>= 0 && a <= 1000 && b >= 100 && b <= 1000){
    c = b/100;
    d = b/10;
    d = b - d*10;
    cout << a + c + d;
} else cout << "false";


}