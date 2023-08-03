//a busstop has n groups of people.the ith group from the beginning has a[i]
// every 30 mins an empty bus arrives at the bus stop. it can carry at most m people.
// the people from the first group enter the bus first and so on.. the order of group never changes
// more over if some group cannot fit all. it waits for the next bus standing next. find the 
//no of buses needed to transport all the groups

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m,rem;
    cin >> n >> m;
    vector<int> groups(n);
    for(int i=0;i<n;i++) {
        cin>>groups[i];
    }
    int count = 0,sum=0;
    for(int i=0;i<n;i++) {
         sum+=groups[i];
    }
    int quo=sum/m;
    rem=sum%m;
    count=quo;
    if(rem>0) count++;
    cout<<count;
    return 0;
}