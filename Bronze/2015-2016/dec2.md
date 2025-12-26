## [USACO 2015 December Contest, Bronze Problem 2. Speeding Ticket](https://usaco.org/index.php?page=viewproblem2&cpid=568)

### Problem Statement
The road is exactly 100 miles long, and Bessie drives the entire length of the road and she wants to determine for herself if she has indeed driven faster than the speed limit for part of her journey.
The road is divided into N segments, each described by a positive integer length in miles, as well as an integer speed limit in the range 1…100 miles per hour. As the road is 100 miles long, the lengths of all N segments add up to 100. For example, the road might start with a segment of length 45 miles, with speed limit 70, and then it might end with a segment of length 55 miles, with speed limit 60.

Bessie's journey can also be described by a series of segments, M of them. During each segment, she travels for a certain positive integer number of miles, at a certain integer speed. For example, she might begin by traveling 50 miles at a speed of 65, then another 50 miles at a speed of 55. The lengths of all M segments add to 100 total miles. Farmer John's tractor can drive 100 miles per hour at its fastest.

Given the information above, please determine the maximum amount over the speed limit that Bessie travels during any part of her journey.

### Solution
Since the range given for the speed limit and Bessie's speed is different, and bessie drives the entire 100 miles, we can record the speed limit and Bessie's speed at every **location**. Therefore, while we input Bessie's range and driving speed, we can compare Bessie's speed and the speed limit at every location within the range.

### [Solution Code](./dec2.cpp)
