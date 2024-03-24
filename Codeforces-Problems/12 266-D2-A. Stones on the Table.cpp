// Problem Link: https://codeforces.com/contest/266/problem/A

// Solution:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == s[i+1])
        {
            if (s[i] == 'R')
                r++;
            else if (s[i] == 'G')
                g++;
            else
                b++;
        }
    }

    cout << r + g + b;
}
