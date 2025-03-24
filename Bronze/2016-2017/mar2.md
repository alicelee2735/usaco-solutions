## [USACO 2017 US Open Contest, Bronze Problem 2. Bovine Genomics](https://usaco.org/index.php?page=viewproblem2&cpid=736)

### Problem Statement
A set of genome sequences for spotty and plain cows is given. Looking carefully at this table, he surmises that position 2 is a potential location in the genome that could explain spottiness. That is, by looking at the character in just this position, Farmer John can predict which of his cows are spotty and which are not (here, A or G means spotty and C means plain; T is irrelevant since it does not appear in any of Farmer John's cows at position 2). Position 1 is not sufficient by itself to explain spottiness, since an A in this position might indicate a spotty cow or a plain cow.
FJ wants to know which positions of the genome string determine a cow's spottiness or plain characteristics.

### Solution Sketch
To determine the position that alters spottiness, we can use brute force to iterate through all the genes for each M possible positions, to check for dupe. A valid position that explains spottiness does not encounter any dupes of genes in the other group of cows.

### [Solution Code](./2016-2017/mar2.cpp)
