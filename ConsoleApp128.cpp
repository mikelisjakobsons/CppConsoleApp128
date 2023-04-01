// ConsoleApp128.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Int128.h"

using std::cin;
using std::cout;
using std::endl;

int mytest128()
{
    _int128 n = 125;
    _int128 n2 = n * n;
    _int128 n4 = n2 * n2;
    _int128 n8 = n4 * n4;
    _int128 n16 = n8 * n8;
    cout << "Power of 125 whose exponents are 1, 2, 4, 8, and 16:\n";
    cout << n << endl << n2 << endl << n4 << endl << n8 << endl << n16 << endl;
    return 0;
}

_uint128 nCr(int n, int r) {
    if (n < 1 || n > 131 || r < 0 || r > n)
        return 0;
    _uint128 res = 1;
    if (2 * r > n)
        r = n - r;
    for (int i = 1; i <= r; i++) {
        _uint128 m = res % (_uint128)i;
        res /= i;
        int j = n - i + 1;
        res *= j;
        res += m * (_uint128)j / (_uint128)i;
        cout << endl << (n - 1 + 1) << " " << i << "  " << res;
    }
    cout << endl;
    return res;
}

int main()
{
    std::cout << "Hello World!\n";

    cout << "Testing 128 bit integers..." << endl;
    cout << (1 << 8) << " is the value of 1 shifted 8 bits to the left, expects 256" << endl;
    mytest128();
    int n, r;
    cout << "Enter 0 to exit; Enter n (max 131) and r in n Choose r: ";
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        cin >> r;
        _uint128 result = nCr(n, r);
        cout << result << endl;
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
