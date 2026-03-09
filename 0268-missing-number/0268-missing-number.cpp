class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n=nums.size();
     int xor1=0;
     int xor2=0;

     //Step1:Find Xor of all no. in expected Range
     for(int i=0;i<=n;i++)
     {
        xor1^=i;
     }   

     //Step2:Find Xor of all the elements of array
     for(int i=0;i<n;i++)
     {
        xor2^=nums[i];
     }

     return xor1^xor2;
    }
};