## [USACO 2016 US Open Contest, Bronze Problem 1. Diamond Collector](https://usaco.org/index.php?page=viewproblem2&cpid=639)


### Problem Statement
She has collected N diamonds (N≤1000) of varying sizes, and she wants to arrange some of them in a display case in the barn.
Since Bessie wants the diamonds in the case to be relatively similar in size, she decides that she will not include two diamonds in the case if their sizes differ by more than K(two diamonds can be displayed together in the case if their sizes differ by exactly K). Given K
, please help Bessie determine the maximum number of diamonds she can display in the case.

### Solution
To make sure the sizes of the diamonds are reordered so that we can expand the group of diamonds by checking subsequent diamonds until the difference between the current diamond and the starting diamond exceeds K, we should sort the sizes from smallest to largest. Then, we search through all combinations of grouping the diamonds as long as the size difference is less than or equal to K, and record the maximum number of diamonds in the process.

### [Solution Code](./2015-2016/mar1.cpp)
