#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<string> brand(size);
    vector<int> price(size);
    vector<int> quality(size);
    for(int i = 0 ; i != size ; i++)
    {
        cin >> brand[i] >> price[i] >> quality[i];
    }
    double temp = 9999999.0;
    for(int i = 0 ; i != size ; i++)
    {
        if(double(price[i]) / double(quality[i]) < temp)
        {
            temp = double(price[i]) / double(quality[i]);
        }
    }
    for(int i = 0 ; i != size ; i++)
    {
        if(double(price[i]) / double(quality[i]) == temp)
        {
            cout << brand[i];
            return 0;
        }
    }
}