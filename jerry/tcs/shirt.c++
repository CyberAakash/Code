//he chooses a shirt on flipkart and is surprisd to see the same shirt on Snapdeal and
//amazon as well. so he decided to buy from the store that offerde the least amount
//
#include<iostream>
#include <vector>
#include<math.h>
using namespace std;
int main() {

    vector<vector<int>>charges(3,vector<int>(3));
    for(int i = 0; i <3;i++ ){
        for(int j = 0; j <3;j++) {
            cin>>charges[i][j];
        }
    }//input
    int flip=(charges[0][0]-(charges[0][0]*charges[0][1]/100))+charges[0][2];
    int ama=(charges[1][0]-(charges[1][0]*charges[1][1]/100))+charges[1][2];
    int snap=(charges[2][0]-(charges[2][0]*charges[2][1]/100))+charges[2][2];
    int minimum=min(flip,min(ama,snap));
    cout<<"Minimum price is: "<<minimum<<" from ";
     if(minimum==flip){cout<<"Flipkart";}
     else if(minimum==ama) {cout<<"Amazon";} 
     else 
     {cout<<"Snapdeal";}

    return 0;
}