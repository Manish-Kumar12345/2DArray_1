// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).
#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter coordinates (l1, r1) and (l2, r2): ";
    cin >> l1 >> r1 >> l2 >> r2;

    int sum = 0;
    for(int i = l1; i <= l2; i++){
        for(int j = r1; j <= r2; j++){
            sum += arr[i][j];
        }
    }

    cout << "The sum of the rectangle from (" << l1 << ", " << r1 << ") to (" << l2 << ", " << r2 << ") is: " << sum << endl;

    return 0;
}