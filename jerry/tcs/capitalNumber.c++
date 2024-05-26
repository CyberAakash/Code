#include<iostream>
using namespace std;
int main() {
    int n;
    cin >>n;
    int sq=n*n;
    int x=n,sum=0;
    while(sq>0) {
        int rem=sq%10;
        sum+=rem;
        sq/=10;
    }
    if(sum==n) cout<<"Capital Number";
    else cout<<"Not a Capital Number";
    return 0;
}