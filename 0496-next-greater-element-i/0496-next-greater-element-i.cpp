class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;

        st.push(0);

        for(int i=1 ; i<nums2.size() ; i++){
            while(true){
                if(st.empty()){
                    st.push(i);
                    break;
                }

                int idx = st.top();
                if(nums2[i] > nums2[idx]){
                    mp.insert({nums2[idx],nums2[i]});
                    st.pop();
                }
                else{
                    st.push(i); 
                    break;
                }
            }
        }

        vector<int> res(nums1.size());
        for(int i=0 ; i<res.size() ; i++){
            if(mp.count(nums1[i])){
                res[i] = mp[nums1[i]];
            }
            else res[i] = -1;
        }

        return res;
    }
};