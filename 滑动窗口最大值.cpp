class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> maxInWindow;
        deque<int> index;
        
        
        for (int i = 0; i < nums.size(); i++) {
            //保证元素递减
            while (!index.empty() && nums[i] > nums[index.back()]) {
                index.pop_back();
            }

            index.push_back(i);
            
			//把不在窗口的元素去掉
            if (!index.empty() && i - k + 1 > index.front()) {
                index.pop_front();
            }
            
            //打印窗口元素
            if (i >= k - 1) {
                maxInWindow.push_back(nums[index.front()]);
            }
        }
        return maxInWindow;
    }
};

