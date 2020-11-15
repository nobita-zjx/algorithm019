学习笔记
1、再次应证算法和数据结构的紧密关系

2、哈希表是根据关键码值进行访问的数据结构(以空间换时间)，鉴于语言特性，
很多哈希表已经由语言实现过了，这个时候我们更多是要记住相关API特性，
同时需要深入分析对应语言是如何实现的（比如Map,set）

3、开始学习树这种二维数据结构（升维），工程上解决的问题更多需要二维接触上解决，
树的各种经常要用到递归。二插搜索树（查询、插入、删除logn）

preorder:
root!=null;root;preorder(left);preorder(right);
inorder:
root!=null;inorder(left);root;inorder(right);
postorder
root!=null;postorder(left);postorder(right);root;
levelorder:
quene<> q;q.push(root);while(!q.empty){for(q.size){q.front();q.pop();for(q.push(left,right,child))}}

4、堆，迅速找到最大或者最小的数据结构，实现方式有很多种，不同的复杂度，
二叉堆（复杂度不好），斐波那契堆，严格的斐波那契堆。工程内可以直接调用优先队列（priority_queue）
