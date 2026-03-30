#include <iostream>
using namespace std;

int main() {
    system ("cls");

    int a, i, j;
    char huruf;

    cout << "Input = ";
    cin >> a; 

    cout << "Output = " << endl;

    for (i = 1; i <= a; i++) {
        huruf = 'A' + (i - 1);  // ada angka ASCII, jadi 'A' = 65, kalo 'B' = 66 dst, makanya ditambah (i - 1)  {ref gugel ^-^}
        for (j = 1; j <= i; j++) {
            cout <<  huruf;
        }
        cout << endl;
    }
}