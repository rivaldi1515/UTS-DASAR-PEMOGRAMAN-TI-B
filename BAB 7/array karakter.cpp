#include <iostream>
using namespace std;

int main ()
{

    char NAMAKU [6] = { 'S', 'A', 'N', 'T', 'I', '\0'};
    char NAMAMU [6] = "SUNTA";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU [C];
    }
    cout << endl;
    cout << NAMAMU ;
    cout << endl << endl;
    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl;
    cout << "Jumlah Elemen NAMAMU : " << sizeof (NAMAKU) << endl << endl;

return 0;
}
