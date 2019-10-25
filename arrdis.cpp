#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    vector <int> vec;
    int element, i, j, dis1, dis2, size, min_dist = INT_MAX;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(vec[i] == vec[j])
            {
                dis1 = abs(i - j);
            }
        }
    }
    return 0;
}