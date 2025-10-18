#include <bits/stdc++.h>
using namespace std;

bool is_plaindrome(string s)
{
    int l = 0;
    int r = s.length();

    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }

        l += 1;
        r -= 1;
    }

    return true;
}

int main() 
{
    int cases;
    cin >> cases;

    for (int i=0; i < cases; i++)
    {
        int length;
        cin >> length;

        string s;
        cin >> s;
        
        if (is_plaindrome(s))
        {   
            cout << s.size();

            for (int j=0; j < s.length(); j++)
            {
                cout << j;
            }

            continue;
        }
        
        

    }
}


