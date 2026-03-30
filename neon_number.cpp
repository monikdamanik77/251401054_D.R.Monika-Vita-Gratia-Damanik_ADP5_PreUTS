#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");

    int a, x, jumlah;

    cout << "Input = ";
    cin >> a;

    x = a*a;
    jumlah = (x / 10) + (x % 10);  // ambil pembagian div dan modulusnya

    cout << "Output = ";

    if (a == jumlah) {
        cout << "Angka NEON";
    } 
    else
    {
        cout << "Bukan angka NEON";
    }

}
