#include <iostream>
using namespace std;

int main()
{
    int n, y, v;
    cin >> n;

    // Array of size n+1 to accommodate the new element
    int a[n+1];

    // Reading the original array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Reading the position y and value v
    cin >> y;
    cin >> v;

    // Validating the position y
    if (y <= n+1 && y > 0)
    {
        cout << "Original array: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        // Shifting elements to the right to make space for the new element
        for (int i = n; i >= y; i--)
        {
            a[i] = a[i - 1];
        }

        // Inserting the new element at position y-1 (since array index starts at 0)
        a[y - 1] = v;

        // Outputting the modified array
        cout << "Modified array: ";
        for (int i = 0; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Invalid position!" << endl;
    }

    return 0;
}
