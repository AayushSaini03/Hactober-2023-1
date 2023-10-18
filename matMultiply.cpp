#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of square matrices: ";
    cin>>size;

    int res[size][size];

    int arr1[size][size];
    cout<<"Enter the elements of matrix 1: ";
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[size][size];
    cout<<"Enter the elements of matrix 2: ";
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"Matrix 1: \n";
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr1[i][j]<<"\t";
        }
    cout<<endl;
    }

    cout<<"Matrix 2: \n";
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr2[i][j]<<"\t";
        }
    cout<<endl;
    }

    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            res[i][j]=0;
            for(int k=0;k<size;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    cout<<"The resultant matrix after multiplication is: \n";
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<res[i][j]<<"\t";
        }
    cout<<endl;
    }

    return 0;
}
