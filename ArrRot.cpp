#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, k , q, m, temp, copy;
    cin >> n >> k >> q;
    copy = k;
    int arr[n];
    for(i = 0; i < n; i++)
    cin >> arr[i];
    if(k >= n) { k = k % n;}
    while(k--)
        {
            temp = arr[ n - 1 ];
            for(i = n - 1 ; i >= 1; i--)
                arr[i] = arr[i - 1];
            arr[0] = temp;
        }
    while(q--)
    {
        cin >> m;
        cout <<  arr[m] << endl;
    }
    return 0;
}