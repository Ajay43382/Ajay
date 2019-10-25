#include <bits/stdc++.h>
using namespace std;
int main()
{
    int shared[100] = {0}, liked[100] = {0}, sum = 0, n = 0;
    cin >> n;
    shared[1] = 5;
    liked[1] = 2;
    for(int i = 2; i <= n; i++)
    {
        shared[i] = liked[i - 1] * 3;
        liked[i] = floor(shared[i] / 2);
    }
    for(int i = 1; i <= n; i++)
    {
        sum = sum + liked[i];
    }
    cout << sum;
}