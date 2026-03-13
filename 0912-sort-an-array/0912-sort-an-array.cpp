class Solution {
public:
    void merge(vector<int>&nums,int start,int end)
    {
        int mid=start+(end-start)/2;
        int len1=mid-start+1;
        int len2=end-mid;

        int arr1[len1];
        int arr2[len2];

        int k=start;
        for(int i=0;i<len1;i++)
        {
            arr1[i]=nums[k++];
        }

        k=mid+1;
        for(int i=0;i<len2;i++)
        {
            arr2[i]=nums[k++];
        }

        int i=0;
        int j=0;
        k=start;
        
        while(i<len1 && j<len2)
        {
            if(arr1[i]<arr2[j])
            {
                nums[k++]=arr1[i++];
            }
            else
            {
                nums[k++]=arr2[j++];
            }
        }
         while(i<len1)
            {
                nums[k++]=arr1[i++];
            }
            while(j<len2)
            {
                nums[k++]=arr2[j++];
            }
    }
    void mergeSort(vector<int>&nums,int start,int end)
    {
        if(start>=end) return;
        int mid=start+(end-start)/2;
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};