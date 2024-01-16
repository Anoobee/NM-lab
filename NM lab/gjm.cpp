#include <iostream>
using namespace std;

class GJM {
private:
    int n;
    double matrix[100][100]; // Adjusted the size to n x n for the coefficient matrix
public:
    void get_data() {
        cout << "Enter the number of equations to solve: " << endl;
        cin >> n;
        cout << "Enter the augmented matrix coefficients (including RHS) row-wise:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n + 1; j++)
                cin >> matrix[i][j];
        }
    }

    void clac() {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                if (i == j)
                    continue;
                double scalar = matrix[i][j] / matrix[j][j];
                for (int k = 0; k < n + 1; k++) {
                    matrix[i][k] = matrix[i][k] - scalar * matrix[j][k];
                }
            }
        }
    }

    void ans() {
        cout << "Solution:" << endl;
        for (int i = 0; i < n; i++)
            cout << matrix[i][n] / matrix[i][n-1] << endl;
    }
};

int main() {
    cout << "hello" << endl;
    GJM m1;
    m1.get_data();
    m1.clac();
    m1.ans();
    return 0;
}
