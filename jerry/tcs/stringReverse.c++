#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int len=str.length();
    for(int i=str.length();i>=0;i--) {
        if(str[i]==' ' || i==0) {
            if(i==0) cout<<str[0];
            for(int j=i+1;j<len;j++) {
                cout<<str[j];
            }
            len=i;
            cout<<" ";
        }
    }
    return 0;
}