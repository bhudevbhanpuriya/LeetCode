#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binary(vector<int>&nums,int l , int r , int target){
        if(l>r) return -1;
        int mid=(l+r)/2;
        if(target==nums[mid]) return mid;
        else if(target<nums[mid])
            return binary(nums,l,mid-1,target);
        return binary(nums,mid+1,r,target);

       // return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right = n-1;
        return binary(nums,left,right,target);
    }
};