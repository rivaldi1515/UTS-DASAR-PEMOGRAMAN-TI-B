#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "masukan sebuah bilangan bulat (1-3) : ";
    cin >> bilangan;

    switch (bilangan)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    default:
        cout << "saya hanya kenal 1, 2, 3 saja " << endl;
    }
    return 0;
}
