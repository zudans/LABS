#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i;
    int n = 1;
    double a = 1;
    double sum = 0;
    double f;


    while (a > 0.0001) {
        f = 1.0;
        
        for (i = 1.0; i <= n; i+=1.0) {
            f = f * i;
        }

        a = pow(10, n) / f;
        sum += a;
        n++;
    }

    cout << sum << endl;

    return 0;
}