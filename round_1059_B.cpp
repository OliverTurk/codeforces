#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string &s)
{
    int l = 0;
    int r = s.length() - 1;

    while (l < r)
    {
        if (s[l] != s[r]) return false;

        l += 1;
        r -= 1;
    }

    return true;
}

int main() 
{
    int cases;
    cin >> cases;

    for (int i=0; i < cases; ++i)
    {
        int length;
        cin >> length;

        string s;
        cin >> s;

        vector<int> removed_idxs;
        
        if (is_palindrome(s))
        {   
            cout << 0 << "\n";
            continue;
        }
            
        int index = 0;

        auto it = remove_if(s.begin(), s.end(), [&](char c) 
        {
            if (c == '0')
            {
                removed_idxs.push_back(index);
                ++index;
                return true;
            }
            ++index;
            return false;
        });

        s.erase(it, s.end());

        if (is_palindrome(s))
        {
            cout << removed_idxs.size() << '\n';
            for (int idx : removed_idxs) cout << idx + 1 << " ";
            cout << '\n';
            continue;
        }

        cout << -1;
        cout << '\n';
    }
}


