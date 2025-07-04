// Write a program to add two matrices and save the result in one of the given matrices.
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
    cout<<"Enter the elements of the 1st matrix"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    } 
    cout<<endl;
    int brr[m][n];
    cout<<"Enter the elements of the second matrix"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    cout<<"calculating the addition two matrix in the given matrix"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<(arr[i][j] += brr[i][j])<<" "; 
        }
        cout<<endl;
    }
}