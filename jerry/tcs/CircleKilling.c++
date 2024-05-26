#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,k;
    cin >>n;
    cin>>k;
    vector<int> circle(n);
    for(int i=0; i<n; i++) {
        circle[i]=1;
    }
    int flag=0,sum=n,count=0;
    while(flag!=1) {
        for(int i=0; i<circle.size();i++){
            if(count<k-1 && circle[i]==1) {
                count++;
                continue;
            }
            if(circle[i]==1) {
                circle[i]=0;
                sum--;
                count=0;
                if(sum==1) {
                    flag=1;
                    break;
                }

            }
        }
    }
        
    for(int i=0;i<circle.size();i++) {
        if(circle[i]==1) {
            cout<<i+1;
        }
        
    }
    cout<<endl;
    return 0;
}
