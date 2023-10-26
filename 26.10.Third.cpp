#include <iostream>
using namespace std;
int main()
{
     setlocale(0, "");
     cout << "Вы открыли бессмысленную пргограмму... " << endl;;
     cout << "-----------------------------------------" << endl;
     cout << "Размер массива? ";
    int n, sum = 0;
    cin >> n;
    int * a = new int [n] ;
    cout << "Из чего состоит?" << endl;
    for (int i = 0; i < n; i++) { 
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
    cout << " Сумма кратных 3-м:  " << sum << endl;
   
    return 0;
}
