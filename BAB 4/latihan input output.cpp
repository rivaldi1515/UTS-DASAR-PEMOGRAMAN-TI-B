#include <iostream>
using namespace std;

int main()
{
    cout << "================================= \n";
    cout << "Nama: Santi" << endl;
    cout << "NIM : 1900167" << endl;
    cout << "Jurusan: Teknik INformatika" << endl;
    cout << "Kontak Pribadi: 083830710974" << endl;
    cout << "================================\n";
    cout << "      Latihan Input Output      \n";
    cout << "********************************\n\n";
    char tampilkan[1];
    char Nama[50], Alamat[50], Tl[50], Jk[50], No[50], Pekerjaan[50], Email[50], website[50];
    cout << "================================\n";
    cout << "    Daftar Riwayat Hidup        \n";
    cout << "================================\n\n";
    cout << "Nama :";
    cin.getline(Nama,50);
    cout << "Alamat :";
    cin.getline(Alamat,50);
    cout << "Tanggal Lahir :";
    cin.getline(Tl,50);
    cout << "Jenis Kelamin :";
    cin.getline(Jk,50);
    cout << "No. Telp/HP :";
    cin.getline(No,50);
    cout << "Pekerjaan :";
    cin.getline(Pekerjaan,50);
    cout << "Email :";
    cin.getline(Email,50);
    cout << "Website :";
    cin.getline(website,50);
    cout <<"Jurusan : Teknik Informatika STMIK Sumedang";
    cin.getline(tampilkan,1);
    return 0;


}
