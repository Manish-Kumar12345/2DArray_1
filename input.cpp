#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows : "<<endl;
    cin>>m;
    int n;
    cout<<"Enter th no of columns : "<<endl;
    cin>>n;
    // input
    int arr[m][n];
    for(int  i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    // print
    for(int  i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}