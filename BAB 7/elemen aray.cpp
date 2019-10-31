#include <iostream>
using namespace std;

int main()
{
    int Nama_Santi[10];
    cout << "Masukan NIlai Pada: " << endl;
    for (int C=0; C<10; C++)
    {
        cout << "Elemen [" << C << "] = ";
        cin >> Nama_Santi [C];
    }
    cout << "\n";

    cout << "Tampilkan nilai yang dimasukan : " << endl;
    for (int D = 0; D<10; D++)
    {
        cout << "Nilai yang terdapat pada elemen ke ";
        cout << D+1 << " = " << Nama_Santi [D] << endl;
    }
    cout << "\n";

    return 0;
}
