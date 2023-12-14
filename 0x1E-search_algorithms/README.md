Search Algorithms
This repository contains implementations of various search algorithms in C programming language. Each algorithm is accompanied by its corresponding time and space complexities.

Tests
tests: Test files for validating the implemented algorithms.
Header File
search_algos.h: Header file that includes necessary definitions and function prototypes.
Data Structures
Singly Linked List Structure
c
Copy code
typedef struct listint_s
{
    int n;              // Integer value
    size_t index;       // Index of the node in the list
    struct listint_s *next; // Pointer to the next node
} listint_t;
Singly Linked List with an Express Lane Structure
c
Copy code
typedef struct skiplist_s
{
    int n;              // Integer value
    size_t index;       // Index of the node in the list
    struct skiplist_s *next; // Pointer to the next node
    struct skiplist_s *express; // Pointer to the next node in the express lane
} skiplist_t;
Function Prototypes
File	Prototype
0-linear.c	int linear_search(int *array, size_t size, int value);
1-binary.c	int binary_search(int *array, size_t size, int value);
100-jump.c	int jump_search(int *array, size_t size, int value);
102-interpolation.c	int interpolation_search(int *array, size_t size, int value);
103-exponential.c	int exponential_search(int *array, size_t size, int value);
104-advanced_binary.c	int advanced_binary(int *array, size_t size, int value);
Tasks
The repository includes the following tasks:

0. Linear search

0-linear.c: Implementation of linear search for finding a value in an array of integers.
1. Binary search

1-binary.c: Implementation of binary search for finding a value in a sorted array.
2. Big O #0

2-O: Text file containing the worst-case time complexity of linear search.
3. Big O #1

3-O: Text file containing the worst-case space complexity of iterative linear search.
4. Big O #2

4-O: Text file containing the worst-case time complexity of binary search.
5. Big O #3

5-O: Text file containing the worst-case space complexity of binary search.
6. Big O #4

6-O: Text file containing the space complexity of the 'allocate_map' algorithm.
7. Jump search

100-jump.c: Implementation of jump search for finding a value in a sorted array.
8. Big O #5

101-O: Text file containing the average-case time complexity of jump search.
9. Interpolation search

102-interpolation.c: Implementation of interpolation search for finding a value in a sorted array.
10. Exponential search

103-exponential.c: Implementation of exponential search for finding a value in a sorted array.
11. Advanced binary search

104-advanced_binary.c: Implementation of advanced binary search for finding a value in a sorted array.
12. Jump search in a singly linked list

105-jump_list.c: Implementation of jump search for finding a value in a singly linked list.
13. Linear search in a skip list

106-linear_skip.c: Implementation of linear search in a skip list for finding a value.
14. Big O #6

107-O: Text file containing the average time complexity of jump search in a singly linked list.
15. Big O #7

108-O: Text file containing the average time complexity of jump search in a sorted skipped linked list.
