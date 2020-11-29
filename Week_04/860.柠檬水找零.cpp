/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if (bills.size() == 0) return true;
        unordered_map<int, int> hashMap;
        for (int i = 0; i < bills.size(); ++ i) {
            if(5 == bills[i]) ++hashMap[5];
            else if (10 == bills[i]) {
                if (hashMap[5] > 0) {
                    --hashMap[5];
                    ++hashMap[10];
                }
                else return false;
            }
            else {
                if (hashMap[10] > 0) {
                    --hashMap[5];
                    --hashMap[10];
                }
                else {
                    hashMap[5] -= 3;
                }
                if (hashMap[5] < 0) return false;
            }
        }
        return true;
    }
};
// @lc code=end

