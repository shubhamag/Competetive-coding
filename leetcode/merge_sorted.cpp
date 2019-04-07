/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/


/* 100% faster, 100% less memory on leetcode */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    	//logic : while m< len(m) and n<len(n) , compare elemetwise and move ptrs
    	//when loop ends, if n<len(n), insert all elements of n into m

    	vector<int> solVec(m+n);
    	int i = 0; int j =0;
    	while(i<m && j<n){

    		if(nums1[i]<nums2[j]){
    			solVec[i+j] = nums1[i];
    			i++;
    		}
    		else{
    			solVec[i+j] = nums2[j];
    			j++;
    		}
    	}
    	while(i<m){
    		solVec[i+j] = nums1[i];
    		i++;
    	}
    	while (j<n){
    		solVec[i+j] = nums2[j];
    		j++;

    	}
        nums1 = solVec;

        
    }
};