#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
