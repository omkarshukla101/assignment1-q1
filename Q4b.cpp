#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows of the array:";
    cin>>m;
    cout<<"enter the number of coloumns of the array:";
    cin>>n;
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<"enter the element with row: "<<i+1<<" and coloumn:"<<j+1<<" of the array:";
        cin>>arr1[i][j];}
    }
    int arr2[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<"enter the element with row: "<<i+1<<" and coloumn:"<<j+1<<" of the array:";
        cin>>arr2[i][j];
        }
    }
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
} 
