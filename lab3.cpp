#include <iostream>
#include <math.h>

#define A 0.1
#define B 0.8
#define E 0.00001

using namespace std;

int main() {
	float x;
	float k = (B - A) / 10.0;
	float sn = 0;
	float se = 0;
	float t;
	float y;
	int i;
	int j;
	int n = 3;

	for (x = A; x <= B; x += k) {
		sn = x;
		se = x;

		for (i = 1; i <= n; i++) {
			sn += pow(x, 4 * i + 1) / (4 * i + 1);
		};

		j = 1;

		do {
			t = pow(x, 4 * j + 1) / (4 * j + 1);

			j++;
			se += t;
		} while (t > E);

		y = log((1.0 + x) / (1.0 - x)) / 4.0 + atan(x) / 2.0;

		cout << "x=" << x << " SN=" << sn << " SE=" << se << " Y=" << y << endl;
	}

	return 0;
}