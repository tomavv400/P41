#include "iostream"

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	unsigned a1, a2, a3, a4;
	int z, n;
	cout << "\n ¬ведите четырЄхзначное число\n";
	cin >> n;
	if (n > 9999) {
		cout << "»дите в ж...., € же сказал ¬ведите четырЄхзначное число";
		return 0;
	}

	a1 = n / 1e3;
	a2 = (n - a1 * 1e3) / 1e2;
	a3 = (n - a1 * 1e3 - a2 * 1e2) / 10;
	a4 = (n - a1 * 1e3 - a2 * 1e2 - a3 * 10);
	z = (a2 * 1e3) + (a1 * 1e2) + (a4 * 10) + a3;
	cout << "\n¬аше новое число равно " << z;
	cout << endl;
	system("pause");
	return 0;
}