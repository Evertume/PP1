#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int min, max, n, curr;
    int cur_cnt = -2000000000;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    min = x[0];
    max = x[n - 1];
    reverse(x, x + n);
    if (min == max)
    {
        cout << max;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            if (curr != x[i])
            {
                curr = x[i];
                for (int j = i + 1; j < n; j++)
                {
                    if (x[i] == x[j])
                    {
                        count++;
                    }
                }
                if (count > cur_cnt)
                {
                    cur_cnt = count;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            if (curr != x[i])
            {
                curr = x[i];
                for (int j = i + 1; j < n; j++)
                {
                    if (x[i] == x[j])
                    {
                        count++;
                    }
                }
                if (cur_cnt == count)
                {
                    cout << x[i] << " ";
                }
            }
        }
    }
}