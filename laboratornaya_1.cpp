#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	double meter;
	int answer;
	cout << "Введите расстояние в метрах:\n";
	cin >> meter;
	answer = (int) (meter / 1000);
	meter -= answer * 1000;
	cout << "Расстояние в километрах: " << answer << " километров, " << meter << " метров";
	return 0;
}