#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a1, a2;

        cout << "Enter num1: ";
        cin >> a1;

        cout << "Enter num2: ";
        cin >> a2;

        if (a1 == 0 || a2 == 0)
        {
            throw a1;
        }

        cout << "\n\nResult of division: " << a1 / a2 << endl;
    }
    catch (int n)
    {
        cout << "0 is not allowed" << endl;
    }
    catch (...)
    {
        cout << "Unknown" << endl;
    }
    return 0;
}
