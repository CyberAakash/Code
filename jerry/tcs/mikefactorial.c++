#include<iostream>
using namespace std;
int fact(int n);
int main() {
    int n;
    cin>>n;
    int factorial=fact(n);
    while(factorial>0) {
        int rem=factorial%10;
        if(rem!=0) {
            cout<<rem;
            break;
        }
        factorial=factorial/10;
    }
    return 0;
}
int fact(int n) {
    if(n<=1) return 1;
    else return n*fact(n-1);
}