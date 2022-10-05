#include <bits/stdc++.h>
using namespace std;

// multiply two number
//  also divide after creating a branch

int main(void)
{

    /* code */
    int a, b;
    cin >> a >> b;
    cout << "Multiplication  ans is = " << a * b << endl;

    // divide that two number
    if (b != 0)
    {
        cout << "division ans is = " << a / b;
    }
    else
    {
        cout << "division with 0 not possible";
    }

    return 0;
}