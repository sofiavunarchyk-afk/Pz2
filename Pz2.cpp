#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c, r, s, p;
    cout << "Введіть a, b, c:" << endl;
    //Введіть сторони трикутника
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    r = s / p;
    cout << "Радіус вписаного кола: " << r << endl;
    return 0;

}