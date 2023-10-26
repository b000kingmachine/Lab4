#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int min_count = 100, max_count = -100;
    int const N = 50;
    int x[N] = { 4, 1, 3, 9, 4, 6 };
    for (int i = 0; i < N; i++) {
        cout << x[i];
    }
    for (int j = 0; j < N; j++) {
        if (x[j] < min_count) {
            min_count = x[j];
            
        }
    }
    for (int a = 0; a < N; a++) {
        if (x[a] > max_count) {
            max_count = x[a];
            
        }
    }
    cout << "\nМинимальный [-] элемент массива: " << min_count;
    cout << "\nМаксимальный [+] элемент массива: " << max_count;
    return 0;
}
