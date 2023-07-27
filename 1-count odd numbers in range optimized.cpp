using namespace std;

#include <iostream>
#include <cmath>

class Solution {
public: static int countOdds(int low, int high) {

    int oddCount=0;
    if (high % 2 ==0 && low %2 ==0){
        oddCount=(high-low) /2;
    }
    else
    {
        oddCount= ( high-low) / 2 + 1;
    }
    return oddCount;
}
};


int main() {
    Solution x ;
    int val=x.countOdds(21,22);
    cout<<val;

    return 0;
}
