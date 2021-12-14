#include <iostream>

using namespace std;

int A_var, B_var = 0;

int main()
{
    cout << "Enter A" << endl;
    cin >> A_var;

    cout << "Enter B" << endl;
    cin >> B_var;

    cout << A_var - B_var << endl;

    return 0;
}
