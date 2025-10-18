#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int k;
    cin >> k;

    string s;
    cin >> s;

    string sub_string;
    string res;
    
    unordered_map<char, int> map;

    for (int i=0; i < s.length(); i++)
    {
        int count = map.count(s[i]) ? map[s[i]]: 0;
        
        map[s[i]] = count + 1;
    }

    for (auto& [key, value] : map)
    {   
        if (value % k != 0) 
        {
            cout << -1;
            return 0;
        }
        
        sub_string += string(value / k, key);
    }

    for (int i=0; i < k; i++) res += sub_string;

    cout << res;

}
