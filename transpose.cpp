#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"Enter the no of rows :"<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no of columns :"<<endl;
    cin>>n;
    // array initialization
    int arr[m][n];
    // input
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // making tarnspose matrix
    int res[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[i][j] = arr[j][i];
        }
    }
    // printing transpose matrix
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}