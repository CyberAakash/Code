//X=AN+Z
#include <iostream>
#include<vector>
using namespace std;
void divisor(int N, vector<int> &X);

int main() {
    int X,A;
    cin >> X >> A;
    vector<int> factors;
    
    for(int i=1;i<X;i++) {
        factors.empty();
        divisor(i, factors);
        for(int j=0;j<factors.size();j++){
            if(A*i+factors[j]==X) {
                cout<<i<<" "<<factors[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
void divisor(int N, vector<int> &factors) {
  
    for(int i=2;i<N;i++) {
        if(N%i==0) factors.push_back(i);
    }
}