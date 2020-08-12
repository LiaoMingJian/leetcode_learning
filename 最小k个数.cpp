class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {
        vector<int> res;
        priority_queue<int> max;//大根堆

        //放进队列
        for (auto num: arr) {
            max.push(num);
            if (max.size() > k) max.pop(); //个数大于k,出队。
        }
        //打印队列
        while (!max.empty()) {
            res.push_back(max.top());
            max.pop();
        }
        return res;
    }
};
