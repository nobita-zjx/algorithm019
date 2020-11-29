学习笔记
如果数据结构没有任何的特点，那么只能采用全局搜索的方式（暴力搜索），
把每个节点全部遍历一次找到需要的结果，同时保证每个节点只访问且仅一次，
这个时候就可以采用DFS或者BFS。DFS和BFS代码模板需要熟记。
DFS模板-递归：
unordered_map<int ,int> visited;
void dfs(Node* root) {
	if (nullptr == root) return;
	if (visited.count(root->val) > 0) return;
	visited[root->val] = 1;
	for (auto val : root->childern) {
		dfs(child);
	}
}
BFS模板:
void bfs(Node* root) {
	if (nullptr == root) return;
	unordered_map<int, int> visited;
	queue<Node*> queNode({root});

	while (!queNode.empty()) {
		Node* node = queNode.top();
		queNode.pop();
		if(visited.count(node->val) > 0) {
			coutinue;
		}
		visited[node->val] = 1;

		for(auto val : node->children) {
			queNode.push(child);
		}
	}
}

贪心算法：在每一步选择中都选择当前状态下最优或者最好的选择，从而结果是最好或最优的算法。
实际项目中贪心算法一般不能得到所要求的结果，但是一旦可以用贪心算法的话，基本贪心算法就是最好的算法。
可以用于辅助算法或者解决要求不是特别精确的问题。
贪心算法与动态规划的不同点是对每个子问题作出选择，但是不能回退。

二分查找：
前提：1、有序，2、上下界，3、可以索引访问。
模板：
int binarySearch(const vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < target) left = mid + 1;
		else right = mid -1;
	}
	return -1;
}