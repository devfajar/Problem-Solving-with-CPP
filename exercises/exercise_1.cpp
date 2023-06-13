// ***************************************
// This Program Leap Year
// ***************************************
#include <iostream>
using namespace std;

int main()
{
    cout << "## Program C++ Hitung Leap Year  ##" << endl;
    cout << "====================================" << endl;
    cout << endl;

    int tahun;

    cout << "Masukkan Tahun" << endl;
    cin >> tahun;

    if (tahun % 4 == 0)
    {
        /* code */
        if (tahun % 100 == 0)
        {
            /* code */
            if (tahun % 400 == 0)
            {
                /* code */
                cout << "Tahun Kabisat" << endl;
            } else {
                cout << "Bukan Tahun Kabisat" << endl;
            }
        } else {
            cout << "Tahun Kabisat" << endl;
        }
    } else {
        cout << "Bukan Tahun Kabisat" << endl;
    }
}