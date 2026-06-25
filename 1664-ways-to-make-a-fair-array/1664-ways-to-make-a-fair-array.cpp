class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        vector<int>evenSum(n);
        vector<int>oddSum(n);
        int evenSum1=0;
        int oddSum1=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                evenSum1+=nums[i];
            }
            else
            {
                oddSum1+=nums[i];
            }
            evenSum[i]=evenSum1;
            oddSum[i]=oddSum1;
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
            int newEsum=0;
            int newOsum=0;
                newOsum=evenSum[n-1]-evenSum[0];
                newEsum=oddSum[n-1];
                if(newEsum==newOsum) count++;
                continue;
            }

            int newEsum=evenSum[i-1]+oddSum[n-1]-oddSum[i];
            int newOsum=oddSum[i-1]+evenSum[n-1]-evenSum[i];
            if(newEsum==newOsum) count++;
        }
        return count;
    }
};