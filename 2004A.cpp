#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int num_testcases = 0;

    cin >> num_testcases; 

    for (int i=0; i < num_testcases; ++i)
    {   
        int num_of_points;

        cin >> num_of_points;

        if (num_of_points == 1)
        {
            cout << "YES";
            continue;
        }
        
        if (num_of_points > 2)
        {
            cout << "NO";
            continue;
        }
        
        int point1, point2;
        cin >> point1 >> point2;

        if (abs(point1 - point2) <= 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
            
    }

    return 0;
}
