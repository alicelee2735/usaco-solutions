## [USACO 2018 December Contest, Bronze Problem 1. Mixing Milk](https://usaco.org/index.php?page=viewproblem2&cpid=855)

### Problem Statement
FJ pours milk into three buckets in a rotation 100 times. For each pour, FJ ensures that the next bucket is filled until it reaches maximum capacity or once the current bucket becomes empty.

### Solution Sketch
Simulate the process 100 times and track the index of the bucket using the modulo method.
eg. bucket 1 ->(pours to) bucket 2
The amount of a single pour is the minimum of what's left in bucket 2 and the current amount in bucket 1.
Add/Subtract the milk amount to each bucket accordingly.

### [Solution Code](./2018-2019/dec1.cpp)
