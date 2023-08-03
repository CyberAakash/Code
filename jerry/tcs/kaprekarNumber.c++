#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n,c=0;
    while(x>0){
        x/=10;
        c++;
    }
    int p=pow(10,c);
    int y=n;
    int rem=y%p;
    int quo=y/p;
    if((rem+ quo)==n) cout<<"Kaprekar Number";
    else cout<<"Not a Kaprekar Number";
    return 0;
}