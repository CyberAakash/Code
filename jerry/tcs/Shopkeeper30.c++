#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> logs(n); 
    for(int i=0; i<n; i++) {
        cin >> logs[i];
    }
    if(logs[0]!=30) {
        cout<<"Transaction NOT Successful!";
        return 0;
    }
    int sum=logs[0];
    for(int i=1; i<n; i++) {
        if(logs[i]==30) {
            sum+=logs[i];
        }
        else {
            int balance=logs[i]-30;
            if(balance>sum) {
                cout<<"Transaction NOT Successful!";
                return 0;
            }
            sum-=balance;
        }
    }
    cout<<"Transaction Successful!";

    return 0;
}