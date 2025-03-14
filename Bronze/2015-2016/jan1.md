## [USACO 2016 January Contest, Bronze Problem 1. Promotion Counting](https://usaco.org/index.php?page=viewproblem2&cpid=591)

### Problem Statement

Farmer John recently expanded the contest to include four divisions of difficulty: bronze, silver, gold, and platinum. All new participants start in the bronze division, and any time they score perfectly on a contest they are promoted to the next-higher division. It is even possible for a participant to be promoted several times within the same contest. Farmer John keeps track of a list of all contest participants and their current divisions, so that he can start everyone out at the right level any time he holds a contest.

When publishing the results from his most recent contest, Farmer John wants to include information on the number of participants who were promoted from bronze to silver, from silver to gold, and from gold to platinum. However, he neglected to count promotions as they occurred during the contest. Bessie, being the clever bovine she is, realizes however that Farmer John can deduce the number of promotions that occurred solely from the number of participants at each level before and after the contest. Please help her perform this computation!

### Solution
We can deduce the number of promotions from platinum division to bronze.

Eg. Bronze before and after will be denoted as b_1 and b_2 in this explanation.

First of all, p_2 - p_1 must be the number of students promoted to platinum from gold, as the original plat students will be the same number.

However, the number of students promoted from silver to gold is **not** g_2 - g_1 since there could be a portion of the original gold students that were promoted to plat. Therefore, we need to add the gold students p_2 - p_1 to our calculation. Thus: g_2 - g_1 + p_2 - p_1.

Bronze to silver promotions are deduced the same way. s_2 - s_1 + (students promoted from silver to gold). Thus: s_2 - s_1 + g_2 - g_1 + p_2 - p_1.


### [Solution Code](./2015-2016/jan1.cpp)
