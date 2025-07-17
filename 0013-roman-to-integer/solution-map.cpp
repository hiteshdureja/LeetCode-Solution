class Solution {
public:
    int romanToInt(string s) {
        string romNum = s;
        int sum = 0;
	unordered_map<char,int> map = {
		{'I', 1}, 
		{'V', 5}, 
		{'X', 10}, 
		{'L', 50}, 
		{'C', 100}, 
		{'D', 500}, 
		{'M', 1000}
	};
	for(int i=0;i<romNum.length();i++){
	    if(i + 1 < romNum.length() && map[romNum[i]]<map[romNum[i+1]]){
	        sum -= map[romNum[i]];
	    }
	    else{
	        sum += map[romNum[i]];
	    }
	}
        return sum;
    }

};