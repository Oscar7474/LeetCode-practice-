class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> s;
        int ans=0;
   
        heights.push_back(0);
        
        for(int i=0;i<heights.size();i++){
            while(!s.empty() && heights[s.top()]>heights[i]){
                int top=heights[s.top()];
                s.pop();
                int ran;
                if (s.empty()) {
                    ran = -1;
                } else {
                    ran = s.top();
                }
                ans=max(ans,top*(i-ran-1));
            }
            s.push(i);  
        }
        return ans; 
    }
};
