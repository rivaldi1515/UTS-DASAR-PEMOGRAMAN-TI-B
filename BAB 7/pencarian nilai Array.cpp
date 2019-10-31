#include <iostream>
using namespace std;

int main()
{
    int A [10];
    int Nilai;
    cout << "Nama: Santi" << endl;
    cout << " NIM : 1900167 " << endl << endl;
    cout << "Nilai pada: " << endl << endl;
    for (int C=0; C<10; C++)
    {
        cout << "Indeks [" << C << "] = ";
        cin >> A [C];
    }
    cout << endl;

    cout << "Nilai yang di cari adalah: ";
    cin >> Nilai;
    for (int D = 0; D<10; D++)
    {
        if (A[D] == Nilai)
        {
            cout << "Nilai terdapat pada indeks ke " << D << endl;
            break;
        }

    }
    cout << "\n";
    return 0;
}
