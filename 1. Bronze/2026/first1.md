## [USACO 2026 First Contest, Bronze Problem 1. Chip Exchange](https://usaco.org/index.php?page=viewproblem2&cpid=1539)

### Problem Statement
Bessie has two types of chips. Chip A and Chip B. Initially, she possesses A chips of type A and B chips of type B. She can exchange Cb chips of type B for Ca chips of type A as many times as he wants. Determine the **minimum** number of extra chips x so that Bessie is **guaranteed** to end up with **at least** fA chips of type A.

### Solution
**1. “Guaranteed”**

“Guaranteed” means for **all** possible distributions of the x chips, Bessie must obtain at least fA chips of type A. This means, if you have x = 3 extra chips, **all** possible distributions should achieve fA chips of type A:
- 3 chips of type A
- 3 chips of type B
- 2 chips of type A, 1 chip of type B
- 1 chip of type A, 2 chips of type B

**2. Approach**

Find the absolute worst-case scenario of extra chips for which there exists a kind of bad distribution that still makes Bessie fail. The answer is then that number + 1.

Step 1: No Extra Chips (X = 0)

The most obvious answer, x = 0, means we check whether Bessie already succeeds without extra chips. If we exchange all existing type B chips and nowA >= fA, return 0.

``` nowA = A + (B / cB) * cA ```

Step 2: How many more A chips do we need?

If nowA < fA, we want to evaluate the number of type A Bessie needs to keep her just away from success(fA).

So the maximum additional A she can gain while still failing is:

``` failA = (fA - 1) - nowA ```

Step 3: How many "useless" B chips can we give? (Fail to exchange)

Exchanges cause large jumps in A, so the worst case tries to delay exchanges as much as possible.

An exchange happens when B reaches a multiple of cB. Any extra B chips placed 1 before the next multiple are effectively “wasted” because they do not trigger an exchange.

``` failB = ((B / cB + 1) * cB - 1) - B ```


Step 4: Compare Ca and Cb

Case 1: cA >= cB (Exchanging is efficient, so we purposely give Bessie lots of chip A)

We spend the remaining budget(failA) by giving A chips directly, but also give Bessie chip B but not enough to make another exchange. Therefore,

``` failB += failA ```


Case 2: cA < cB (Exchanging is inefficient, so we give Bessie as many B chips as we can)

Stuff B chips, contributing:

(failA / cA) * cB

Any leftover failA:

failA % cA

Total Extra x: 

``` failB += (failA / cA) * cB + (failA % cA) ```


**3. Time Complexity**

O(1)

### [Solution Code](./first1.cpp)
