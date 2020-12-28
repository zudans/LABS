#include <iostream>
#include <ctime>
#define s 5

using namespace std;

int matrix_sum(int** arr) {
    int i;
    int j;
    int k = 0;
    int sum = 0;

    for (i = 0; i < s; i++) {
        for (j = 0; j < k; j++) {
            sum += arr[i][j];
        }

        k++;
    }

    return sum;
}

void print_matrix(int** arr) {
    int i;
    int j;

    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int** get_matrix() {
    int i;
    int j;
    int** arr = new int*[s];
    
    for (i = 0; i < s; i++) {
        arr[i] = new int[s];
        for (j = 0; j < s; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    return arr;
}

int main() {
    int i;
    int n;

    srand(time(nullptr));

    cin >> n;

    int*** matrices = new int**[n];
    int max_sum = 0;
    int sum;

    for (i = 0; i < n; i++) {
        matrices[i] = get_matrix();
        print_matrix(matrices[i]);
        sum = matrix_sum(matrices[i]);
        
        cout << sum << endl;

        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    cout << endl << max_sum << endl;
}