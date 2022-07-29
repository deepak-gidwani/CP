#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeros++;
        }
        if (zeros == n)
        {
            cout << 0 << endl;
            continue;
        }
        int i = 0;
        int count = 0;
        bool flag = 0;
        while (i < n)
        {
            while (arr[i] != 0 && i < n)
            {
                i++;
                flag = 1;
            }
            if (flag)
            {
                count++;
                flag = 0;
                continue;
            }
            i++;
        }
        if (count >= 2)
        {
            cout << 2 << endl;
        }
        else if (count == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}