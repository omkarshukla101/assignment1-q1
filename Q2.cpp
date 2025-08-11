   
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element num "<<i+1<<" of the array:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }
} 
