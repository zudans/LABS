#include <iostream>

using namespace std;

int main() {
    int n;
    int m;

    cin >> n;
    cin >> m;

    cout << (++n*++m) << endl;
    cout << (m++<n) << endl;
    cout << (n++>m) << endl;

    return 0;
}