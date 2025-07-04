// Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows :"<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no of columns :"<<endl;
    cin>>n;
    int arr[m][n];
    // input
    cout<<"Enter the array elements "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int maxnumber = INT_MIN;
    int row_number = -1;
    // checking the row which has maximum sum
    for(int i = 0 ; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
            if(maxnumber < sum){
                maxnumber = sum;
                row_number = i;
            }
        }
    }
    cout<<" The rownumber that has maximum sum is"<<row_number;
}