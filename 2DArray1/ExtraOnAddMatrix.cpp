#include<iostream>
using namespace std;
int main(){
    // for matrix a
        int a[2][3] = {1,2,3,4,5,6};
    int b[2][3] = {7,8,9,10,11,12};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    // for matrix b
        for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
   // b ke andar a add karna hai
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        b[i][j]+=a[i][j];
    }
    
   }
}