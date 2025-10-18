#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i=0; i<cases; i++)
    {
        int length;
        cin >> length;
        
        if (length == 1)
        {
            int num;
            cin >> num;
            cout << num << '\n';
            continue;
        }

        vector<int> nums;

        for (int j=0; j<length; j++)
        {
            int num;
            cin >> num;

            nums.push_back(num);
        }

        int l = 0;
        int r = length - 1;
        float best_average = 0;

        while (l <= r)
        {
            float average;

            if (l == r)
            {
                average = nums[l];
            }
            else
            {
                average = accumulate(nums.begin() + l, nums.begin() + r + 1, 0.0f) / (r - l + 1);
            }

            best_average = max(best_average, average);

            if (nums[l] < nums[r])
            {
                l += 1;
            }
            else
            {
                r -= 1;
            }
        }

        cout << best_average << '\n';

    }

    return 0;
};
