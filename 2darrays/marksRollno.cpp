#include<iostream>
using namespace std;

int main() {
    int arr[4][2] = {{1, 3}, {2, 3}, {22, 33}, {23, 12}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
