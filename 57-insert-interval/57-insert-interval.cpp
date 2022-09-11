class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> res;
        while(i<n && intervals[i][1] < newInterval[0]) res.push_back(intervals[i++]); 
        vector<int> in = newInterval;
        while(i<n && intervals[i][0] <= newInterval[1]){
            in[0] = min(in[0], intervals[i][0]);
            in[1] = max(in[1], intervals[i][1]);
            i++;
        }
        res.push_back(in);
        while(i<n) res.push_back(intervals[i++]); 
        return res;
    }
};