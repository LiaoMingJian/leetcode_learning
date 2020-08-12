class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> cnt;//哈希表用来计数
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;//小根堆
        
        //将值放进哈希表并计数
        for (auto num: nums) cnt[num]++;//计数

        //把哈希表的key和value放进队列
        for (auto kv: cnt) {
            pq.push({kv.second, kv.first});//频次和值都放优先队列
            if (pq.size() > k) pq.pop(); //大于k时，队列里面最小值出列
        }
         
        //打印队列 
        while (!pq.empty()) {
            res.push_back(pq.top().second);//取出队列的值
            pq.pop();
        } 
        return res;
    }
};
