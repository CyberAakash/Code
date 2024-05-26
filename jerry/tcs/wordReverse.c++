#include <string>
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(std::cin, str);
    int x=0;
    for(int i = 0; i <str.length(); i++) {
        if(str[i] == ' ' || i==str.length()-1){
            if(i==str.length()-1) cout<<str[str.length()-1];
            for(int j=i-1;j>=x;j--){
                cout<<str[j];
            }
            cout<<" ";
            x=i+1;
        }
    }
    return 0;
}