#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int ub(vector<int>& v , int x){
        int low=0;
        int high=v.size()-1;
        int ans = v.size();
        while(low<=high){
            int mid = low + (high-low) / 2;
            if(v[mid] > x){
                ans = mid;
                high=mid-1;
            }
            else low=mid-1;
        }
        return ans;
    }
    int counter(vector<vector<int>>& v ,int n, int m ,int mid){
        int cnt=0;
        for(int i=0 ;i<n;i++){
            cnt+=ub(v[i],mid);
        }
        return cnt;
    }
    int median(vector<vector<int>> &matrix, int n, int m){
           int low=INT_MAX , high=INT_MIN;
           for(int i=0;i<n;i++){
               low=min(low,matrix[i][0]);
               high=max(high,matrix[i][m-1]);
           }
           int req=(n*m)/2;
           while(low<=high){
               int mid = low + (high-low)/2;
               int noOfLesser = counter(matrix,n,m,mid);
               if(noOfLesser >= req ) high = mid -1;
               else low =mid+1;
           }
           return low;
    }
};