#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    string name;
    queue<string> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cin >> name;
            s.push(name);
        }
        else
        {
            s.pop();
        }
        if (!s.empty())
            cout << s.front() << endl;
            else
            cout << "queue is empty" << endl;
    }
    return 0;
}