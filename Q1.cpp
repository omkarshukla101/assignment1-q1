
#include<iostream>
using namespace std;
int arr[100];
int n=0;
void create(){
    cout<<"enter the number of elements in array:";
    cin>>n;
}
void display(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insert(){
    int x,y;
    cout<<"enter the index at which the element is to be added:";
    cin>>x;
    cout<<"enter the value to be added at the given index:";
    cin>>y;
    for(int i=n;i>x;i--){
        arr[i]=arr[i-1];
    }
    arr[x]=y;
    n++;
}
void del(){
    int z;
    cout<<"enter the index to be deleted:";
    cin>>z;
    for(int i=z;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void search(){
    int a;
    cout<<"enter the element to be searched:";
    cin>>a;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"element has been found at index:"<<i<<endl;
        }
    }
}
int main(){
    cout<<"1 to create, 2 to display, 3 to insert, 4 to delete, 5 to linear search and 6 to exit:";
    int b;
    cin>>b;
    switch(b){
        case 1:{
            create();
            break;
        }
        case 2:{
            display();
            break;
        }
        case 3:{
            insert();
            break;
        }
        case 4:{
            del();
            break;
        }
        case 5:{
            search();
            break;
        }
        case 6:{
            cout<<"exiting";
            break;
        }
        default:{
          cout<<"enter a valid number."
        }
    }
}
