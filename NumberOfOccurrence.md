This code defines a C++ class named "Solution" with a member function named "count." The purpose of this function is to count the occurrences 
of a given integer "x" in a sorted integer array "arr" of size "n." The array "arr" is assumed to be sorted in non-decreasing order.

The function works as follows:


1. It starts by finding the first occurrence of the given integer "x" in the array. 
It uses a binary search algorithm to locate the first occurrence, updating the "firstOccurrence" variable accordingly. 
If the element at the middle of the current search range is equal to "x," it means that the first occurrence might be in the left half, 
so the right search boundary is moved to the left. If the element is less than "x," the search is moved to the right half. 
If it's greater, the search is moved to the left half.

2. After finding the first occurrence, the code proceeds to find the last occurrence of "x" using a similar binary search approach. 
It updates the "lastOccurrence" variable accordingly. If the element at the middle is equal to "x," it means that the last occurrence might 
be in the right half, so the left search boundary is moved to the right. If the element is less than "x," the search is moved to the right half. 
If it's greater, the search is moved to the left half.

3. Finally, the code calculates the count of occurrences by subtracting the index of the first occurrence from the index of the last occurrence 
and adding 1. This is because the indices are 0-based, and adding 1 compensates for the inclusive count of elements between the two indices.

Overall, the code efficiently finds the first and last occurrences of the given integer "x" in the sorted array using binary search 
and calculates the count of occurrences based on their indices.
