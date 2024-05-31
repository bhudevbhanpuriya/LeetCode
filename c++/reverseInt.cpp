#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
                //int pow =1;
        long rem=0;
        while(x){
                int n = x%10;
                rem = rem*10 + n;
                x/=10;
            }
    
        
    if (rem>INT_MAX || rem<INT_MIN) return 0;
       
    return int(rem);
        
    }
};
