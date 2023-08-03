//b+(n-1)*a
//d+(n-1)*c
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int a,b,c,d,n;
    cin >> a >> b >> c >> d >> n;
    vector<int> lane1(n),lane2(n);
    for(int i=1;i<=n;i++) {
        lane1[i] =b+(i-1)*a;
        lane2[i] =d+(i-1)*c;
    }
    for(int i=1;i<=n;i++) {
        if(find(lane2.begin(),lane2.end(),lane1[i])!=lane2.end()) {
            cout<<lane1[i];
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}