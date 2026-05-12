class Solution {
public:

    static bool cmp(vector<int>& a, vector<int>& b)
    {
        return (a[1] - a[0]) > (b[1] - b[0]);
    }

    int minimumEffort(vector<vector<int>>& tasks) {

        sort(tasks.begin(), tasks.end(), cmp);

        int currentEnergy = 0;
        int minimumEnergy = 0;

        for(auto &task : tasks)
        {
            int actual = task[0];
            int minimum = task[1];

            // if current energy less than required
            if(currentEnergy < minimum)
            {
                minimumEnergy += (minimum - currentEnergy);
                currentEnergy = minimum;
            }

            // perform task
            currentEnergy -= actual;
        }

        return minimumEnergy;
    }
};