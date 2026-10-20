class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        string expstr = "+*/-";
        stack<int>st;

        for(int i=0 ; i<tokens.size() ; i++){
            string token = tokens[i];
            if(expstr.contains(token)){
                int opr2 = st.top(); st.pop();
                int opr1 = st.top(); st.pop();
                int val = 0;
                switch(token[0]){
                    case '+':
                    val = opr1 + opr2;
                    break;

                    case '-':
                    val = opr1 - opr2;
                    break;

                    case '*':
                    val = opr1 * opr2;
                    break;

                    case '/':
                    val = opr1 / opr2;
                    break;
                }
                st.push(val);
            }
            else st.push(stoi(token));
        }
        return st.top();
    }
};