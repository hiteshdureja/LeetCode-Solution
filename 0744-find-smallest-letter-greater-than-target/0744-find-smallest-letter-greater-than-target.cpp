class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high = letters.size()-1;
        int mid;
        while(low<high){
            mid = low + (high-low)/2;
            if(letters[mid] <= target)
                low = mid+1;
            else
                high = mid;
        }
        if(letters[low] > target)
            return letters[low];
        else
            return letters[0];
    }
};