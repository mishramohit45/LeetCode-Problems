class Solution {
public:
    long long calculateTotalHour(vector<int>&v,int mid)
    {
        long long totalHour=0;
        for(int i=0;i<v.size();i++)
        {
            totalHour+=v[i]/mid;

        if(v[i]%mid!=0)
        {
            totalHour++;
        }
        }
        return totalHour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=INT_MAX;
        int start=1;
        int end = *max_element(piles.begin(), piles.end());
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            long long totalHour_toEat=calculateTotalHour(piles,mid);

            if(totalHour_toEat<=h)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};