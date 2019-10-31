#include <iostream>
using namespace std;

int main()
{
    double Nilai_Ujian;
    char Indeks;

    cout << " KONVERSI NILAi SISWA \N \n ";
    cout << "Masukan NIlai Ujian :";
    cin>> Nilai_Ujian;
    cout << endl;

    if(Nilai_Ujian>=85) {
        Indeks='A';}
        else
        if(Nilai_Ujian>=75) {
        Indeks='B';}
        else
        if(Nilai_Ujian>=55) {
        Indeks='C';}
        else
        if(Nilai_Ujian>=40) {
        Indeks='D';}
        else {
            Indeks='E';
        }
        cout <<"Indeks Siswa="<<Indeks<<endl;

        return 0;
        }


