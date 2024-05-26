#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMax(vector<int> &arr,int k,int pos);
int findMin(vector<int> &arr,int k,int pos);
int main( ){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n),temp(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp.begin(), temp.end());
    int x=0,y=n-1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<temp[y]<<" ";
            y--;
        }
        else {
            cout<<temp[x]<<" ";
            x++;
        }
          
    }
    return 0;
}
int findMax(vector<int> &arr,int k,int pos) {
    int max=arr[pos];
    int end=pos+k;
    for(int i=pos+1; i<end;i++) {
        
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int findMin(vector<int> &arr,int k,int pos) {
    int min=arr[pos];
    int end=pos+k;
    for(int i=pos+1; i<end;i++) {
        if(arr[i]<min) min=arr[i];
    }
    return min;
}