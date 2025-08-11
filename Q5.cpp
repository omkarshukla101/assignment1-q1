
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows:";
    cin>>m;
    cout<<"enter the number of coloumns:";
    cin>>n;
    int arr[m][n];
     cout << "Sum of each row:";
    for(int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];}
        cout<<"Row " << i + 1 << ": " <<rowSum<< endl;
    }
    cout << "Sum of each column:";
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += arr[i][j];
        }
        cout<< "Column "<< j + 1<< ": " <<colSum<< endl;
    }
}

