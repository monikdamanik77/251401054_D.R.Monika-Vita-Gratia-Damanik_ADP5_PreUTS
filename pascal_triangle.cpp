#include <iostream>
using namespace std;

int main() {
    system ("cls");

    int a, i, j, nilai;

    cout << "Input =  ";
    cin >> a;

    cout << "Output = " << endl;

    for (i = 0; i < a; i++) {
        nilai = 1;
        for (j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i - j) / (j + 1);   // rumus untuk hitung segitiga pascalnyaa 
        }   
            cout << endl;
    }
}