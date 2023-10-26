#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "RU");
    int n, asd = 0;
    cout << "Введите конечное число : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        asd += i;
    }
    cout << " Сумма чисел от 1 до " << n << " равна " << asd;
    return 0;



}