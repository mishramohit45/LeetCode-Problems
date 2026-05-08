class Solution {
public:
    bool rotateString(string s, string goal) {
        //1)first check both size if unequal then return false
        //2)second adding the same string to it self bc all roatation exist if we add like s=abcdeabcde goal=cdeab
        //3)last chek in the string that goal is exist or not
        if(s.size()!=goal.size()) return false;
        string temp=s+s;
        if(temp.find(goal)!=-1) return true;
        else return false;
    }
};