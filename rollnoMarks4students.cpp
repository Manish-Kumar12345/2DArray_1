#include<iostream>
using namespace std;
int main(){
    // roll number , marks
    // 4 student
    int arr[2][4];
    for(int i = 0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                cin>>arr[i][j];
            }
    }      

    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // storing column wise;
    int brr[4][2];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}