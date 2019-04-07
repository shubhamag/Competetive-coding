/*Median of a stream
295. Find Median from Data Stream

[2,3,4], the median is 3

[2,3], the median is (2 + 3) / 2 = 2.5

Design a data structure that supports the following two operations:

void addNum(int num) - Add a integer number from the data stream to the data structure.
double findMedian() - Return the median of all elements so far.

Notes:
1)Trivial : internal rep. = vector -> push_back for addNum,  Sort when findMedian called ->  nlogn
2) Insertion : Sorted vector , search = log(n), insert = n  -> O(n)
3) BST ?? : root or one of its nodes should be median if balanced -> how to ? map/multiset ??
4) Buckets -> 2 buckets, b1<elem<b2
=> max(b1) < elem < min(b2)
=> max_heap, min_heap
*/

