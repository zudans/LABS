#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i;
    double n = 2;
    double a = 1;
    double sum = 0;
    double f;


    while (a > 0.0001) {
        f = 1.0;
        
        for (i = 1.0; i <= n; i+=1.0) {
            f = f * i;
        }

        a = log10(f) * exp(-n * sqrt(n));
        sum += a;
        n++;
    }

    cout << sum << endl;

    return 0;
}