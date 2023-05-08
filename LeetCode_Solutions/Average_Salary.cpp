/* Solution for Problem : Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double ans = 0.0;
        for(auto x : salary){
            ans = ans + x;
        }
        int size = salary.size();
        int min = salary[0];
        int max = salary[size-1];
        ans = ans - (min+max);
        return ans / (size-2);
    }
};


*/