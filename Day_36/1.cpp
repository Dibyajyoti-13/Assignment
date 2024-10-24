#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Enter the length of the sequence: ";
        cin >> n;

        vector<int> a(n);
        cout << "Enter elements: ";
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int result = a[0];
        for (int i = 1; i < n; ++i)
        {
            if (i % 2 != 1)//Turtle
            {
                result = min(result, a[i]);
            }
            else//Piggy
            {
                result = max(result, a[i]);
            }
        }

        cout << "The final result is: " << result << endl;
    }

    return 0;
}
