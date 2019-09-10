#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Введите значение A\n";
    cin >> a;
    b = a;
    a = a*a;
    a = b*a;
    b = a;
    a = a*a;
    a = a*a;
    a = a*b;
    cout << a;
    return 0;
}
