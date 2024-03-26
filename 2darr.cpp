#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    //int arr[3][4]={{1,2,3,4},{2,4,6,8},{3,6,9,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
