#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 9999, count_num = 0;
    int const SIZE = 393;
    int arr[SIZE] = { 212, 142, 65, 12, 7, 333 };
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
    }
    for (int j = 0; j < SIZE; j++) {
        if (arr[j] <= count) {
            count = arr[j];
        }
    }
    for (int a = 0; a < SIZE; a++) {
        if (arr[a] == count) {
            count_num += 1;
        }
    }
    cout <<  "\nMin: " << count;
    cout <<  "\nCount:" << count_num;
    return 0;
}
