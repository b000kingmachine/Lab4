#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int decimal;
    cout << "Программа по переводу числа из десятичной системы счисления в двоичную " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Введите число в десятиричной системе счисления: ";
    cin >> decimal;
    int binary = 0;
    int power = 1;
    while (decimal > 0) {
        int rem = decimal % 2;
        binary += rem * power;
        decimal /= 2;
        power *= 10;
    }
    cout << "Ваше число в двоичной системе счисления  - " << binary;

    return 0;
}
