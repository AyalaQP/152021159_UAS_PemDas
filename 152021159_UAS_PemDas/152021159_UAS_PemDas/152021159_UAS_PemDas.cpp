// 152021159_UAS_PemDas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int i;
	int n;
	int x[i];
	int y[i];
	int xy;
	int zx;
	int zy;
	int x2;
	int y2;

	cout << "Berapa kali: ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Input Y : ";
		cin >> y[i];
		cout << "Input X : ";
		cin >> x[i];
		cout << "====================";
		cout << endl;
	}

	if (x < 0) {
		cout << " Masukan angka >= 0 " << endl;
	}
	else if (x >= 0) {
		for (i = 0; i < n; i++) {
			xy = x[i] * y;
			cout << "XY = " << xy << endl;

			zx = x[i] + x[i];
			cout << "Zx = " << zx << endl;

			zy = y[i] + y[i];
			cout << "Zy = " << zy << endl;

			x2 = x[i](2);
			cout << "X^2 = " << x2 << endl;

			y2 = y[i](2);
			cout << "Y^2 = " << y2 << endl;

			cout << "====================";
			cout << endl;

			a = xy - zx * zy;
			cout << " A = " << a << endl;

			b = x2 - x2;
			cout << " B = " << b << endl;

			c = y2 - y2;
			cout << " C = " << c << endl;
		}

	}

	return 0;

}

