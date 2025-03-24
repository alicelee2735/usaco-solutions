## [USACO 2017 February Contest, Bronze Problem 2. Why Did the Cow Cross the Road II](https://usaco.org/index.php?page=viewproblem2&cpid=712)

### Problem Statement
FJ gives us a circular path where 26 cows cross, exactly twice. The order of cow crossing is a string of uppercase letters. We need to determine how many cows cross each others' paths.


### Solution Sketch
Two cows (x and y) cross each others' path in the circle if:
1. x enters->y enters->x exits->y exits
2. The other way around.

cowInOut[i/j][0] represents the index where the ith or jth cow(eg cow 0 = cow A) crossed in
cowInOut[i/j][1] represents the index when cthe cow crossed out

Time complexity: since we ignore the constant factor when calculating time complexity, the for loop that runs for 26^2 times(slowest phase) concludes time complexity O(26^2), thus O(1).


### [Solution Code](./2016-2017/feb2.cpp)
