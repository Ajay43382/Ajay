#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, hash[100] = {0};
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    for(int i = 0; i < n; i++)
    hash[arr[i]]++;
    for(int i = 0; i < 100; i++)
    cout << hash[i] << " ";
    return 0;
}