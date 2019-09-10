#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите значение x\n";
    cin >> a;
    a = a-3;
    b = 4*pow(a,6) - 7*pow(a,3) + 2;
    cout << b;
    return 0;
}
