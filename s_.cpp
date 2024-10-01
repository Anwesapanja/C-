#include<iostream>
using namespace std;
class SPM{
    public:
    void sparseMatrix(int arr[][20], int m, int n){
        int x=m*n;
        cout<<"Total no. of elements in the matrix: "<<x<<endl;
        int y=(2/3.0)*x;
        int count=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j]==0)
                    count++;
            }
        }
        if(count>=y)
            cout<<"It is a sparse matrix"<<endl;
        else
            cout<<"It is not a sparse matrix"<<endl;
    }
};
int main(){
    int m, n, arr[20][20];
    cout<<"Enter the no. of rows and columns: ";
    cin>>m;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[m][n];
        }
    }
    SPM spm;
    spm.sparseMatrix(arr, m, n);
    return 0;
}