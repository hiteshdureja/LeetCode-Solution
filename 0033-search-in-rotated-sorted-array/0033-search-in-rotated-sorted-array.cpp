class Solution {
public:
    int search(vector<int> &ar, int target){
    int i = 0, j = ar.size() - 1, mid;
    while (i <= j){
        mid = i + (j - i) / 2;
        if(ar[mid] == target){
            return mid;
        }
        if (ar[mid] >= ar[i]){
            if (target >= ar[i] && target < ar[mid])
                j = mid - 1; // move left
            else
                i = mid + 1;// move right
        }
        else{
            if (target > ar[mid] && target <= ar[j])
                i = mid + 1;// move right
            else
                j = mid - 1;// move lrft
        }
    }
    return -1;
    }
};