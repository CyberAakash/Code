#include <iostream>
#include <math.h>
using namespace std;
int ways(int rupees);
int main() {
    int rupees,side=1;
    cin>>rupees;
    int y=ways(rupees);//head=1 tails=0
    cout<<y;
    return 0;
}
int ways(int rupees) {
    int pick1;
    if(rupees==1) return 1;
    if(rupees==0) return 0;
    int pick2= 1+ ways(rupees-2);
    
    pick1= 1+ ways(rupees-1);

    return pick2+pick1;
}