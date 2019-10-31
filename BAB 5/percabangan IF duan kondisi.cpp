#include <iostream>
using namespace std;

int main()
{
    cout << "KELULUSAN SISWA /N /N ";

    double Nilai_Ujian;
    cout << "masuka nilai ujian : ";
    cin >> Nilai_Ujian;
    cout << endl;

    if (Nilai_Ujian >=60)
    {
        cout << ("Nilai_Ujian = Lulus");
        cout << endl << endl;
    }else{
        cout << "Hasil Ujian = Tidak Lulus";
        cout << endl << endl;
        }
    return 0;
}
