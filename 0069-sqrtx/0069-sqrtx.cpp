class Solution {
public:
    int mySqrt(int x) {
     long long start=0;
     long long end=x;
     int ans=-1;
     while(start<=end)
     {
        long long mid=start+(end-start)/2;
        long long square=mid*mid;
        if(square==x)
        {
            return mid;
        }
        else if(square<x)
        {
            start=mid+1;
        }
        else if(square>x)
        {
            end=mid-1;
        }
     }   
     return end;
    }
};