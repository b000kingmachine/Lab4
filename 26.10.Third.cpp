#include <iostream>
using namespace std;
int main()
{
     setlocale(0, "");
    cout << "введите размер массива: ";
    int n, sum = 0;
    cin >> n;
    int * a = new int [n] ;
    cout << "введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " сам элемент: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
        }
    }
    cout << "сумма элементов которые кратные 3 = " << sum << endl;
    delete[] a;
    return 0;
}
