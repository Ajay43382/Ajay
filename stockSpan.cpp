#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void StockSpan(int arr[], int n)
{
    stack<int> s;
    s.push(0);
    v.push_back(1); // beacuse ans[0] will be always 1

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] <= arr[i])
            s.pop();

        if (s.empty())
            v.push_back(i + 1);
        else
        {
            v.push_back(i - s.top());
        }
        s.push(i);
    }
}

int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price) / sizeof(price[0]);

    StockSpan(price, n);

    //print
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return EXIT_SUCCESS;
}
