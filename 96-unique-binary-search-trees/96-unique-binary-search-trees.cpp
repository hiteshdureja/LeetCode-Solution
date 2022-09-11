class Solution {
public:
	int numTrees(int n) {
		long prev=1;
		long current=1;
		for(int i=0;i<n;i++){
			current=(2*(2*i+1)*prev)/(i+2);
			prev=current;
		}
		return current;
	}
};