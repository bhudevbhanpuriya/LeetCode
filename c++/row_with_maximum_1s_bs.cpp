#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max_sum = 0;
	    int index = -1;
	    for(int i=0 ;i<n ;i++){
	        int sum=0;
	        int low = 0;
	        int high= m-1;
	        while(low<=high){
	            int mid = low +(high-low)/2;
	            if(arr[i][mid]==1){
	                sum+=high-mid+1;
	                high=mid-1;
	            }
	            else low=mid+1;
	        }
	        if(sum > max_sum){
	            max_sum = sum;
	            index = i;
	        }
	    }
	    return index;
	}