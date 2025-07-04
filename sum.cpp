#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows : "<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no of columns :"<<endl;
    cin>>n;
    // array initialization 
    int arr[m][n];
    cout<<"Enter the array elements :"<<endl;
    // input
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum = 0;
    // finding the sum
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
    }
    cout<<"sum of all the elements pf th 2Dmatrix is : "<<sum<<endl;
}