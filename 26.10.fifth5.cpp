
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int u, temp_id;
	int id[25];
	int score[25]; 
	cout << "Введите количество участников: ";
	cin >> u;
	for (int i = 0; i < u; i++) {
		cout << "Введите идентификационный номер участника: ";
		cin >> id[i];
		cout << "Введите количество баллов участника: ";
		cin >> score[i];
	}
	return 0;
}

