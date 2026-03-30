#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");

    int a, b, c, d, e, x;

    cout << "Input = ";
    cin >> a >> b >> c >> d >> e; // ada 5 variabel berurut

    cout << "Output = ";

    for (x = 5; x > 0; x--)  {
        if (x == 5) cout << e << " ";
        else if (x == 4) cout << d << " ";
        else if (x == 3) cout << c << " ";
        else if (x == 2) cout << b << " ";
        else if (x == 1) cout << a << " ";
    }
} 