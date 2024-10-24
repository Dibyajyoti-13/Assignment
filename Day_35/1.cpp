#include <iostream>
using namespace std;

int distance()
{
    int n, x, a[50], i, max_distance = 0, start = 0;

    cout << "Enter n and x: ";
    cin >> n >> x;
    cout << "Enter gas station points: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] - start > max_distance)
        {
            max_distance = a[i] - start;
        }
        start = a[i];
    }
    int final_distance = 2 * (x - a[n - 1]);
    return (max_distance > final_distance ? max_distance : final_distance);
}

int main()
{
    int test_cases, arr[10];
    cout << "Enter Test cases: ";
    cin >> test_cases;
    for (int a = 0; a < test_cases; a++)
    {
        arr[a] = distance();
    }

    for (int a = 0; a < test_cases; a++)
    {
        cout << "Minimum volume of Gas Tank: " << arr[a] << endl;
    }
}