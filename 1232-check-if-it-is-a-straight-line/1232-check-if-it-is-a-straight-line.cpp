class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for(int i = 2; i < coordinates.size(); i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if((y-coordinates[0][1])*(x-coordinates[1][0])!=(y-coordinates[1][1])*(x-coordinates[0][0]))
                return false;
        }
        return true;
    }
};