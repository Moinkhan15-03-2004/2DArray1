#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a row:";
    cin>>n;
    int m;
    cout<<"Enter a coloumn:";
    cin>>m;
    int arr[m][n];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
             cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
}