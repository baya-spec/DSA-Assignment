
Algorithm Time Complexity (Best)	Time Complexity (Average)	Time Complexity (Worst)	Space Complexity
Insertion Sort	O(n)	O(n²)	O(n²)	O(1)
Selection Sort	O(n²)	O(n²)	O(n²)	O(1)
Bubble Sort	     O(n)	 O(n²)   O(n²)   O(1)

Bubble Sort:

Simplest to implement with pointers

Consistently shows O(n²) performance

Only advantage is O(1) space complexity

Not practical for large datasets

Insertion Sort:

Efficient for small datasets or nearly sorted data

Adaptive - performs better when input is partially sorted

Stable sorting algorithm (maintains relative order of equal elements)

Works by building a sorted section at the beginning of the array

Best case O(n) when array is already sorted

Selection Sort:

Always performs O(n²) comparisons regardless of input order

Not adaptive - performs the same number of operations every time

Not stable by default (can be made stable with extra care)

Works by repeatedly finding the minimum element

Makes fewer swaps than Insertion Sort (O(n) swaps vs O(n²) swaps)