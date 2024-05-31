#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
    int minimum(int arr[] , int n){
        int mini=INT_MAX;
        int low=0 , high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                mini=min(mini,arr[low]);
                low=mid+1;
            }
            else{
                mini=min(mini,arr[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
	int findKRotation(int arr[], int n) {
	    int mini=minimum(arr,n);
	    int k=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==mini){
	            k=i; break;
	        }
	    }
	    return k;
	}

};