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
/* time exceed
int largestRectangleArea(int* heights, int heightsSize) {
    int maxArea = 0;
    for (int i = 0; i < heightsSize; i++) {
        int height = heights[i];
        int width = 1;
        for (int j = i - 1; j >= 0 && heights[j] >= height; j--) {
            width++;
        }
        for (int j = i + 1; j < heightsSize && heights[j] >= height; j++) {
            width++;
        }
        int area = height * width;
        if (area > maxArea) {
            maxArea = area;
        }
    }
    return maxArea;
}
*/
