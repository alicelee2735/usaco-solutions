## [USACO 2016 February Contest, Bronze Problem 1. Milk Pails](https://usaco.org/index.php?page=viewproblem2&cpid=615)

### Problem Statement

Farmer John has received an order for exactly M units of milk (1≤M≤1,000
) that he needs to fill right away. He has three milk pails of integer sizes X, Y, and M (1≤X<Y<M). All three pails are initially empty. Using these three pails, he can perform any number of the following two types of operations:
- He can fill the smallest pail (of size X) completely to the top with X units of milk and pour it into the size-M pail, as long as this will not cause the size-M pail to overflow.

- He can fill the medium-sized pail (of size Y) completely to the top with Y units of milk and pour it into the size-M pail, as long as this will not cause the size-M pail to overflow.

Although FJ realizes he may not be able to completely fill the size-M
 pail, please help him determine the maximum amount of milk he can possibly add to this pail.

INPUT FORMAT (file pails.in):

The first, and only line of input, contains X, Y, and M, separated by spaces.

OUTPUT FORMAT (file pails.out):

Output the maximum amount of milk FJ can possibly add to the size-M pail.

### Solution
Search through **all** the combination of filling Ys and Ms, and record the maximum size it gets to, but break if it exceeds the limit.

### [Solution Code](./2015-2016/feb1.cpp)
