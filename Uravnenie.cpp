#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите значение x\n";
    cin >> a;
    b = 3*pow(a,6) - 6*pow(a,3) - 7;
    cout << b;
    system("pause");
    return 0;
}
