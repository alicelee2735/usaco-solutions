## [USACO 2016 December Contest, Bronze Problem 2. Block Game](https://usaco.org/index.php?page=viewproblem2&cpid=664)

### Problem Statement

Farmer John is trying to teach his cows to read by giving them a set of N spelling boards typically used with preschoolers (1≤N≤100). Each board has a word and an image on each side. When the boards are lying on the ground, N words are therefore shown. By flipping over some of the boards, a different set of N words can be exposed. He wants to make sufficiently many blocks of each letter so that no matter which set of N
 words is exposed on the upward-facing boards, the cows will be able to spell all of these words using the blocks. For example, if N=3 and the words 'box', 'cat', and 'car' were facing upward, the cows would need at least one 'b' block, one 'o' block, one 'x' block, two 'c' blocks, two 'a' blocks, one 't' block, and one 'r' block.


### Solution Sketch
Since there are multiple combinations of words facing upwards, it is important to count(and accumulate) the highest frequency that each letter appearss, so that blocks are enough to spell all the words.

### [Solution Code](./2016-2017/dec2.cpp)


