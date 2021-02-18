/*В С се използва библиотека за сортиране. Принципно имаме:
Selection Sort
Binary Sort
Merge Sort
Radix Sort
Insertion Sort
Намерете разликите между методите и кой кога е най-бърз.*/

/*NAME :            Best:      Average:      Worst:           Memory:     Stable:     Method:     Other notes:
Selection Sort     O(n^2)        O(n^2)        O(n^2)            1          NO        Selection     Stable with O(n) extra space or when using linked lists.

Binary Sort

Merge Sort        O(nlogn)       O(nlogn)        O(nlogn)        n           YES       Merging       Highly parallelizable (up to O(log n) using the Three Hungarians' Algorithm)

Radix Sort

Insertion Sort     O(n)          O(n^2)        O(n^2)             1           YES       Insertion     O(n + d), in the worst case over sequences that have d inversions.*/



/*Merge sort is an efficient, general-purpose, comparison-based sorting algorithm. 
Most implementations produce a stable sort, which means that the order of equal elements is the same in the input and output*/
