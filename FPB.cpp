#include <iostream>
using namespace std;

int main() {
    system ("cls");

    int a, b, i;
    int fpb = 1;

    cout << "Input = ";
    cin >> a >> b;

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {   // nilainya benar kalo keduanya habis dibagi i
            fpb = i;   
        }
    }
       cout << "Output = " << fpb;
}