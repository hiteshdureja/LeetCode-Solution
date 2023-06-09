class Solution {
public:
    int mem[1000];
    int climbStairs(int n) {
        mem[1]=1;
        mem[2]=2;
        if (mem[n] !=0)
            return mem[n];
        else
            mem[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return mem[n-1]+mem[n-2];
    }
};