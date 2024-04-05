// Problem Link: https://codeforces.com/contest/686/problem/A

// Solution:

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, x; cin >> n >> x;

    long long int d;
    int count = 0;
    char s;

    for(int i=0; i<n; ++i) {
        cin >> s >> d;
        switch (s) {
        case '-':
            if(d>x)
                count++;
            else
                x-=d;
            break;
        case '+':
            x+=d;
            break;
        }
    }
    cout << x << " " << count;   
}