#include<iostream>
using namespace std;
int main(){

     int n;
    cout<<"Enter row number";
    cin>>n;
    int m;
    cout<<"Enter coloumn number:";
    cin>>m;
    int arr[m][n];
    // input
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
}