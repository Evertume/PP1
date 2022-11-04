#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
    n >= 1;
    n <= 1000;
	cin >> n;
	while (n > 0)
	{
		sum += n;
		n--;
	}
	cout << sum;
	return 0;
}