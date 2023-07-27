using namespace std;

#include <iostream>
#include <cmath>

class Solution {
public: static int countOdds(int low, int high) {

    int oddCount=0;
    if (high % 2 ==0){
        oddCount= high-low ;

        if((double) oddCount / 2 > 0 && (double)oddCount /2 < 1)
        {
            oddCount=1;
        }
        else
        {
            if (low%2==0)
            {
                oddCount=(int)ceil(oddCount/2) ;
            }
            else
            {
                oddCount=(int)ceil(oddCount/2)+1 ;
            }
        }

    }
    else
    {
        oddCount= high-low ;
        oddCount= oddCount / 2 +1;

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
