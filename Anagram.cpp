#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        int h1[26]={0},h2[26]={0};
        int c=0;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<s1.size();i++)
        {
            h1[s1[i]-'a']++;
        }
         for(int i=0;i<s2.size();i++)
        {
            h2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(h1[i] != h2[i])
            c = c + abs(h1[i]-h2[i]);
        }
        cout<<c<<"\n";
        
    }
}
