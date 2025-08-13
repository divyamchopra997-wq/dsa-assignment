#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the number of rows and column";
    cin>>x;
    cin>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }  }
        for(int i=0;i<x;i++){// display matrix
            for(int j=0;j<y;j++){
                cout<<arr[i][j];
                cout<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<x;i++){
            for(int j=i;j<y;j++){
                if(i!=j){
                    swap(arr[i][j],arr[j][i]);
                }
            }
        }
        cout<<"matrix after taking transpose";
        cout<<endl;
        for(int i=0;i<x;i++){// display matrix after transpose
            for(int j=0;j<y;j++){
                cout<<arr[i][j];
                cout<<" ";
            }
            cout<<endl;
        }
}
