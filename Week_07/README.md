﻿学习笔记
本周的作业题自己实现起来感觉用的都是之前的方法（DFS，BFS等），除了Trie树的实现，
并没有很好的将本周所学内容运用于解题中。

Tri树，即字典树，树形结构。典型应用是用于统计和排序大量的字符串，搜索引擎的词频统计。
有点事最大限度的减少无谓的字符串比较，查询效率比哈希表高。

并查集主要需要记住代码模板，使用场景有：
组团配对问题，group or not?
基本操作：makeSet(s)、unionSet(x,y)、find(x)。（模板写的不好，导致朋友圈、岛屿、围绕的区域都是用DFS实现的）

剪枝实际上就是对状态树中无效的分支或者次优的分支不进行搜索

双向BFS其实就是字面意思，主要是记住模板

启发式搜索是一种告知搜索方向的方法，关键在于估价函数（优先级函数）本身。

