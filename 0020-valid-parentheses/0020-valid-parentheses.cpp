class Solution {
public:
    bool isValid(string s) {
	stack<char> st;
	for(auto c:s){
		if(c=='(' || c=='{' || c=='['){
			st.push(c);
		}
		if(c==')' && (st.empty() || st.top()!='(')){
			return false;
		}
		if(c=='}' && (st.empty() || st.top()!='{')){
			return false;
		}
		if(c==']' && (st.empty() || st.top()!='[')){
			return false;
		}
		if(c==')' || c=='}' || c==']'){
			st.pop();
		}
	}
	return st.empty();
}
};