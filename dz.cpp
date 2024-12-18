#include <iostream>
using namespace std;

int main() {
    int rows, cols, num;
    cin >> rows >> cols >> num;

    int arr[rows][cols];
    int temp = num;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = temp;
            temp *= 2;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
