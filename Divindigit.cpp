#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        int number, count = 0;
        cin >> number;
        int copy = number;
        while(number != 0)
        {
            int div = number % 10;
            if( div != 0){if(copy % div == 0){{count ++;}}}
            number = number / 10;
        }
        cout << count << endl;
    }
    return 0;
}