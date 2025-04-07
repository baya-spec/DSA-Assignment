Ternary Search :
How It Works
Ternary search is a divide-and-conquer algorithm similar to binary search but divides the array into three parts instead of two:

It calculates two mid-points: mid1 = left + (right-left)/3 and mid2 = right - (right-left)/3

Compares the target with elements at these mid-points

Eliminates either the first 1/3 or last 1/3 of the search space if the target isn't found in middle third
Repeats until the element is found or the search space is exhausted

Complexity Analysis :
Time Complexity: O(log₃ n) - slightly worse than binary search's O(log₂ n)

Space Complexity: O(1) for iterative, O(log₃ n) for recursive

Best Case: O(1) when the target is at first mid-point

Worst Case: When the target is at either end of the array

Interpolation Search

How It Works:

Interpolation search is an improved variant of binary search that estimates the position of the target value based on the values at the boundaries:

Uses the formula: pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low])

This works particularly well for uniformly distributed sorted data

The search space is reduced exponentially rather than logarithmically

Complexity Analysis
Time Complexity:

Best Case: O(1) - when the estimate is perfect

Average Case: O(log log n) for uniformly distributed data

Worst Case: O(n) - when values increase exponentially

Space Complexity: O(1) for iterative implementation

Summary of Findings

Performance Characteristics:

Binary Search: Reliable O(log n) for all cases

Ternary Search: Slightly slower (more comparisons per iteration) than binary search

Interpolation Search: Extremely fast (O(log log n)) for uniform data but degrades to O(n) for non-uniform data

Memory Usage:

All three algorithms have O(1) space complexity in iterative form

Recursive versions would have logarithmic space complexity

Practical Recommendations:

Use Binary Search when:

You need guaranteed performance

Data distribution is unknown or non-uniform

Implementing in performance-critical systems

Use Ternary Search when:

You're exploring algorithm variations

The cost of comparisons is extremely high