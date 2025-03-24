## [USACO 2017 US Open Contest, Bronze Problem 1. The Lost Cow](https://usaco.org/index.php?page=viewproblem2&cpid=735)

### Problem Statement
FJ looks for bessie on a number line path in a zig-zag pattern.
FJ starts at x, while bessie is at y. FJ moves to x+1,then reverse his direction and mobe to x-2, then to position x+4, and so on.


### Solution Sketch
We can simply implement FJ's movement with a for loop, until the worst FJ can travel(9 times abs(x-y)).
Our variable **pos** changes within the for loop, and **dist** counts the total distant FJ travelled so far. Variable **a** tells the next movement of FJ.

Time Complexity: O(log |x-y|)

### [Solution Code](./2016-2017/mar1.cpp)
