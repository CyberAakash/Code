#include<iostream>
#include <string>
using namespace std;
int main() {
    string str[4];
    for( int i=0;i<4;i++) {
        cin>>str[i];
    }
    for(int i=0;i<4;i++) {
        int cnt=0;
        for(int j =i+1;j<4;j++) {
            if(str[i]==str[j]) {
                cnt++;
                // str[j].push_back(cnt);
                str[j] += cnt;
            }
        }
        cnt=0;
    }
    for( int i=0;i<4;i++) {
        cout<<str[i]<<" ";
    }
    return 0;
}