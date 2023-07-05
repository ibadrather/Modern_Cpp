#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        /* Enter your code here */
        // Print A in hexadecimal with 0x prefix
        cout << nouppercase << hex << left << showbase << (long long)A << endl;

        // Print B with exactly 2 decimal places, right justified to width 15
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;

        // Print C in scientific notation with exactly 9 decimal places
        cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
    }
    return 0;
}