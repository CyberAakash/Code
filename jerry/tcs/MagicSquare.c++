#include<iostream>
#include<vector>
using namespace std;
int main() {
    int r,c;
    cin>>r >>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }//input
    int d1=0,d2=0;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(i==j) d1+=arr[i][j];
            if(i+j==r-1) d2+=arr[i][j];
        }
    }
    if(d1==d2) cout<<"Magic Square"<<endl;
    else cout<<"Not a Magic Square";
    return 0;
}