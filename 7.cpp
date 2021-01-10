#include <iostream>
#include <math.h>

using namespace std;


double f(double x) {
	return x - (1 / (3 + sin(3.6 * x)));
}

int main() {
	double a;
	double b;
	double x;
	double e;
	int i = 0;
	int method;

    cout << "1. half-division method" << endl;
    cout << "2. newton method" << endl;
    cout << "3. iteration method" << endl;
	cout << "method (1/2/3): ";
	cin >> method;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "e: ";
	cin >> e;

	switch (method) {
    	case 1:
    		while ((fabs(b - a) > e) && (f(x) != 0)) {
    		    x = (a + b) / 2;

    		    cout << "x = " << x << endl;

    			if (f(a) * f(x) < 0) {
    				b = x;
    			} else {
    				a = x;
    			}

    			i++;
    		}
    		cout << "found x = " << x << " for " << i << " steps" << endl;
    		break;
    	case 2:
    	    x = 0;
    	    double df;

            df = (f(x + e) - f(x)) / e;

    		while ((fabs(b - a) > e) && (f(x) != 0)) {
    		    x = x - f(x) / df;

    		    cout << "x = " << x << endl;

    			i++;
    		}
    		cout << "found x = " << x << " for " << i << " steps" << endl;
    		break;
    	case 3:
    		x = 0;

    		while ((fabs(b - a) > e) && (f(x) != 0)) {
    		    x = 1 / (3 + sin(3.6 * x));

    		    cout << "x = " << x << endl;

    			i++;
    		}
    		cout << "found x = " << x << " for " << i << " steps" << endl;
    		break;
    	default:
    	    cout << "invalid method" << endl;
    	    return 0;
	}
}