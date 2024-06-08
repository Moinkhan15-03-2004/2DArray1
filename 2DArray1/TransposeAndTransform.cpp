#include<iostream>
using namespace std;
int main(){
    int m;
     cout<<"Enter row/coloum:";
     cin>>m;
     int arr[m][m];
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
     }
     cout<<" \n";
     //print 
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     // transpose in the same matrix
      //print 
     for(int i=0;i<=m-1;i++){
        for(int j=i+1;j<=m-1;j++){
            // swaping of i,j,and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
     }
      //print 
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

}