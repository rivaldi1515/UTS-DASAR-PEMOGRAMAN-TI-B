#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int j, k, C, temp;

    cout <<"Masukan nilai pada elemen array : " << endl;
    for (C=0; C<7; C++)
    {
        //enginput elemen array
        cout << "A([" << C << "] = ";
        cin >> A [C];
    }
    cout << "\nNilai element array sebelum diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    // mengurutkan metode maksimum-minimum
    int maks, U=6;
    for (J=0; J<6; J++)
    {
        if (A[k] > A [jmaks])
        {
            jmaks = K;
        }
    }

    // penukaran Nilai Element Array
    temp = A[U];
    A[U] = A [jmaks];
    A [jmaks] = temp;
    U--;

}
cout << "\n Nilai Elemen setelah di urutkan : " << endl;
for (C=); C<7; C++)
{
    cout << "A[" << C << "] = " <<A[C] << endl;
}
return 0;

}
