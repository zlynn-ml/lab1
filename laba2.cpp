#include <iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	if (x < 0)
		cout << x * x;
	else if (x == 0)
		cout << "1";
	else
		cout << 1 / x;
	return 0;
}