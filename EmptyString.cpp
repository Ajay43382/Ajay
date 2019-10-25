#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false);
    string str;
    int i;
    cin >> str;
    for(i = 1; i < str.length() - 1; i++)
	{
		if(str[i - 1] == str[i]){
			str.erase(i - 1, 2);
			i = 0;
		}
	}
	if(str.length() == 0) cout << "Empty String";
	else cout << str;
    return 0;
}