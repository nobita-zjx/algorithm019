/*
 * @lc app=leetcode.cn id=127 lang=cpp
 *
 * [127] 单词接龙
 */

// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        queue<string> que;
        que.emplace(beginWord);
        unordered_map<string,int> visitMap;
        visitMap.insert(pair<string, int>(beginWord, 1));
        while (!que.empty()) {
            if (que.front() == endWord) return visitMap[endWord];
            string temp  = que.front();
            string ss = temp;
            int step = visitMap[temp];
            que.pop();
            for (int i = 0; i < temp.size(); ++i) {
                char tempc = temp[i];
                for (char c = 'a'; c <= 'z'; ++c) {
                    temp[i] = c;
                    if (wordSet.find(temp) != wordSet.end() && visitMap.find(temp) == visitMap.end()) {
                        visitMap.insert(pair<string, int>(temp, step + 1));
                        que.emplace(temp);
                        wordSet.erase(temp);
                    }
                }
                temp[i] = tempc;
            }
        }
        return 0;
    }
};
// @lc code=end

