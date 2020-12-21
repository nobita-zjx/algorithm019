/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] 实现 Trie (前缀树)
 */

// @lc code=start
class Trie {
public:
    bool isEND;
    Trie* next[26];
    /** Initialize your data structure here. */
    Trie() {
        isEND = false;
        memset(next, 0, sizeof(next));
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* temp = this;
        for (char c : word) {
            if (temp->next[c - 'a'] == nullptr) {
                temp->next[c - 'a'] = new Trie();
            }
            temp = temp->next[c - 'a'];
        }
        temp->isEND = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* temp = this;
        for (char c : word) {
            if (temp->next[c - 'a'] == nullptr) return false;
            temp = temp->next[c - 'a'];            
        }
        return temp->isEND;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* temp = this;
        for (char c : prefix) {
            if (temp->next[c - 'a'] == nullptr) return false;
            temp = temp->next[c - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

