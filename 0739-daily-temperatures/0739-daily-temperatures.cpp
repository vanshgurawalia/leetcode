class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>days(temperatures.size());
        stack<int>stack;
        stack.push(0);

        for(int i=1 ; i<temperatures.size() ; i++){
            int currtemp = temperatures[i];
            while(!stack.empty()){
                int idx = stack.top();
                int mintemp = temperatures[idx];

                if(currtemp > mintemp){
                    days[idx] = i-idx;
                    stack.pop();
                }
                else break;
            }
            stack.push(i);
        }
        return days;
    }
};