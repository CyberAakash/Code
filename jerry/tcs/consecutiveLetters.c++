#include<iostream>
#include<string>
using namespace std;
int main() {
    int sum=0;
    string str;
    getline(std::cin, str);
    int count=0,pos=0;
    for(int i=pos;i<str.length();i++) {
        char c = str[i];
        count++;
        for(int j=i+1;j<str.length();j++) {
            if(str[j]==c) count++;
            else {
                pos=j+1;
                break;
            }
            pos=j+1;
        }
        if (count%2==0) {
              sum+=count;
        }
        count=0;
    }
    cout<<sum;
    return 0;
}