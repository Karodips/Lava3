#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите значение A\n";
    cin >> a;
    a = a*a;
    a = a*a;
    a = a*a;
    cout << a;
    return 0;
}
