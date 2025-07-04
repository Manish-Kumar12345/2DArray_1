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
    // max
    int max = INT_MIN;
    for(int  i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;    
}