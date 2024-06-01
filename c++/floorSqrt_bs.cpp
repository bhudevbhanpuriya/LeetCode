#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
       int low=1;
       int high=x;
       int ans =-1;
       while(low<=high){
           int mid = (low+high)/2;
           if(mid <= x/mid) {
               ans = mid;
               low=mid+1;
           }
           else high = mid-1;
       }
       return ans;
    }
};