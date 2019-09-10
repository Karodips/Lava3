#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c, pomoch;
    cout << "Введите числа А и В\n";
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << "\n";
    pomoch = a;
    a = c;
    c = b;
    b = pomoch;
    cout << "A: " << a << "\nB: " << b << "\nC: " << c;
    return 0;
}
