#include <iostream>
using namespace std;
int main()
{

    int age;
    cin >> age;

    if (age >= 0)
    {
        if (age <= 17)
        {
            cout << "Child";
        }
        else if (age >= 18 and age <= 64)
        {
            cout << "Adult";
        }
        else
        {
            cout << "Senior Citizen";
        }
    }

    return 0;
}