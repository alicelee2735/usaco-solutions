## [USACO 2017 December Contest, Bronze Problem 2. The Bovine Shuffle](https://usaco.org/index.php?page=viewproblem2&cpid=760)

### Problem Statement
N cows are dancing in the "Bovine Shuffle" pattern. An array **a** is given. The Shuffle consists of cows in position i of the lineup moving to position a[i] three times. The input tells us the cows' lineup(with ID) **after** the shuffles.


### Solution Sketch
We can simply simulate the shuffle process three times by reversing the shuffle process.

Cows at position a[i] should move to position i. 

Make sure that we have a vector to store the cows' positions after shuffling one digit. 

Finally, update the cows' ID after a full shuffle.

### [Solution Code](./2017-2018/dec2.cpp)
