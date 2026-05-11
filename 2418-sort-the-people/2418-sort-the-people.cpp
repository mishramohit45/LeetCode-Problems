class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>temp;
        for(int i=0;i<names.size();i++)
        {
            temp.push_back({heights[i],names[i]});
        }
        auto lambda = [&](pair<int, string>& p1, pair<int, string>& p2) {
            return p1.first > p2.first;
        };
        sort(begin(temp), end(temp), lambda);
        vector<string>res;
        for(auto it:temp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};