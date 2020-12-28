#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int i;
    int j;
    int n;
    int v;
    int k;
    int t;
    int p = 0;

    srand(time(nullptr));

    cin >> n;
    cin >> v;
    cin >> k;

    int a[n];

    for (i = 0; i < n; i++) {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    cout << endl;
    
    for (i = 0; i < n; i++) {
        if (a[i] == v) {
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            
            n--;
            break;
        }
    }
    
    while (p++ < k) {
        t = a[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = t;
    }
    
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}