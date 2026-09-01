class Solution {
public:
 bool isNumPresent(vector<int>&arr,int target,int size)
 {
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        return true;
    }
    return false;
 }
    int missingNumber(vector<int>& nums) {
        int numToCheck=0;
        int n=nums.size();
       while(isNumPresent(nums,numToCheck,n))
       {
           numToCheck++;
       }
          return numToCheck;
        
        
    }
};