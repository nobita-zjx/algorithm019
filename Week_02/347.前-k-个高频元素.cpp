/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for (auto i : nums) map[i]++;
        
        priority_queue <pair<int,int>> que;
        for(auto m:map){
            que.push(make_pair(m.second, m.first));
        }
        vector<int> vec;
        for (int i = 0; i < k; ++i) {
            vec.push_back(que.top().second);
            que.pop();
        }
        return vec;
    }
};
// @lc code=end

