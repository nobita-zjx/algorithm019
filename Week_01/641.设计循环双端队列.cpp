/*
 * @lc app=leetcode.cn id=641 lang=cpp
 *
 * [641] 设计循环双端队列
 */

// @lc code=start
class MyCircularDeque {
public:
    vector<int> data;
    int size;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        size = k;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (data.size() == size) return false;
        data.insert(data.begin(), value);
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (data.size() == size) return false;
        data.insert(data.begin() + data.size(), value);
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (data.empty()) return false;
        data.erase(data.begin());        
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (data.empty()) return false;
        data.erase(data.begin() + data.size() - 1);        
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if (data.empty()) return -1;
        return data[0];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if (data.empty()) return -1;
        return data[data.size() - 1];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        if (data.empty()) return true;
        return false;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        if (data.size() == size) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
// @lc code=end

