#include <iostream>
using namespace std;
 
int main (){
    int arr[1000], n, even = 0, odd = 0, i;
    cin >> n;
    for(i = 0; i < n; i++)
    cin >> arr[i];
     for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << even << " ";
    cout << odd;
    return 0;
    
    
    
}