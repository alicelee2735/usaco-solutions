## [USACO 2018 December Contest, Bronze Problem 2. The Bucket List](https://usaco.org/index.php?page=viewproblem2&cpid=856)


### Problem Statement
FJ pours b buckets of milk in the time span of a to b(buckets can be reused after emptied). We need to calculate the least amount of buckets FJ needs.

### Solution Sketch
Simulate the process using brute force and check for the buckets needed for each range. If the number buckets left in the storage is not enough for the current pour, total bucket number increment accordingly.


### [Solution Code](./2018-2019/dec2.cpp)
