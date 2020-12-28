#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;
    double f;

    cin >> a;
    cin >> b;
    d = 6.0 * a * a * b * b + 4.0 * a * b * b * b + b * b * b * b;
    if (d == 0.0) {
        cout << "Знаменатель равен нулю" << endl;
        return 0;
    }
    c = (a + b) * (a + b) * (a + b) * (a + b) - (a * a * a * a + 4.0 * a * a * a * b);
    f = c / d;
    cout << f << endl;
    return 0;
}
