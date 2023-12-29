#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "Turkish");
	int num;
	cout << "Bir sayý giriniz : ";
	cin >> num;

	cout << "0 ile " << num << " arasindaki asal sayilar:\n";

	for (int i = 1; i <= num; i++) {

		int sayac = 0;

		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				sayac++;

			if (sayac > 2)
				break;
		}
		if (sayac == 2)
			cout << i << " ";

	}
}