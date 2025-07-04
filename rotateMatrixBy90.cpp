#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows / columns of the matrix :"<<endl;
    cin>>n;
    int arr[n][n];
    // taking input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    // printing the matrix
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transposeing the matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // swapping
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // revrsing the array
    for(int i = 0; i < n; i++){
        
        for(int j = n-1; j >=0; j--){
            while(i < j){
                // swapping
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    cout<<endl;
    // printng the new rotate array
    cout<<"matrix after 90 degree rotation"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}