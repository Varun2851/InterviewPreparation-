class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;   
        for(int i=0;i<a.size();i++){
            if(a[i]>0) st.push(a[i]);    // +ve element
            else if(a[i]<0) {            // -ve element
                bool k=true;
                while(!st.empty()){
                    if(st.top()<0) break;
                    else if(st.top()<abs(a[i])) st.pop();
                    else if(st.top()==abs(a[i])) {
                        k=false;
                        st.pop();
                        break;
                    }
                    else {
                        k=false; break;
                    }
                }
                if(k) st.push(a[i]);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());  //Store element in ans vector.
            st.pop();
        }
        reverse(begin(ans),end(ans));  //Reverse the ans vector.
        return ans;
    }
};   