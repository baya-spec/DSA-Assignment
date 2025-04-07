                  #Write an algorithm for finding the second or the third largest element?
Algorithm for the second largest element
1, Initialize: 
•	First (largest element, initialized to a very small value or negative infinity).
•	Second (second largest element, also initialized to a very small value or negative infinity).
2, Iterate:
•	For each element X in the array:
•	If X is greater than first:
•	Update second to be the current first (because the previous largest element is now the second largest).
•	Update first to be X (since X is now the largest element).
•	Else if X is greater than second and X is not equal to first (to handle duplicates):
•	Update second to be X.

3, Return the second largest element.
Algorithm for the third largest element
1, Initialize:
•	First (largest element, initialized to negative infinity).
•	Second (second largest element, also initialized to negative infinity).
•	Third (third largest element, initialized to negative infinity).
2, Iterate:
•	For each element X in the array:
•	If x > first:
•	Update third to be second, second to be first, and first to X:
•	Else if x > second and x !=first:
•	Update third to be second and second to X
•	Else if x > third and x != second and x != first:
•	Update third to be X.
3, Return the third largest element.
