#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Введите числа А и В\n";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "A: " << a << "\nB: " << b;
    return 0;
}
