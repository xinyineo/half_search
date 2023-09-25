# half_search
二分查找算法的多解讨论
旨在讨论二分查找算法的不同算法的区别，题目如下（来自于leetcode）

#
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

///
half_search1采用顺序查找方式，暴力出结果，但未利用题目给定的“有序的数组”的条件，且时间复杂度高，为O(n)；
half_search2采用二分查找方法，效率高，时间复杂度为O(log2 n)
