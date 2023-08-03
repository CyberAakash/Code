/*
he's paid rs.100 per hr. he earns an extra 15 on any part of the day when he works >8hrs. he earns 
25% bonus on SAt. and 50% bonus on Sunday. the bonus is computed based on the no of hours worked
given no. of hrs worked. Find the salary for the week.
*/
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr(7);
    for(int i = 0; i <7;i++) {
        cin>>arr[i];
    }//input
    int sum=0,bonus=0;
    for(int i = 0; i < arr.size();i++) {
        if(i!=5 && i!=6 && arr[i]>8) sum+=(arr[i]-8)*115+(100*8);
        else if(i!=5 && i!=6 && arr[i]<=8) sum+=arr[i]*100;
        else if(i==5) sum+=(arr[i]-8)*125+(100*8);
        else sum+=(arr[i]-8)*150+(100*8);
    }
    cout<<sum<<endl;
    return 0;
}