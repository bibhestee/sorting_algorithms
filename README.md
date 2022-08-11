# Sorting_algorithms
Sorting algorithms &amp; Big O 
- This project is the implementation of how to select the best sorting algorithm and how to select the best algorithm for a project.
- It also helps to develop the use and implementation of Big O notation in calculating the time complexity of an algorithm

## Requirements

### General

- Allowed editors: vi, vim, emacs

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

- All your files should end with a new line

- A README.md file, at the root of the folder of the project, is mandatory

- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

- You are not allowed to use global variables

- No more than 5 functions per file

- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.

- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

- The prototypes of all your functions should be included in your header file called sort.h

- Don’t forget to push your header file

- All your header files should be include guarded

- A list/array does not need to be sorted if its size is less than 2.


## Tasks/Projects

### Bubble sort

- Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

- Prototype: `void bubble_sort(int *array, size_t size);`
      
- You’re expected to print the array after each time you swap two elements
      
- Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
  in the best case
  in the average case
  in the worst case

### Insertion sort

- Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
      
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
      
- You’re expected to print the list after each time you swap two elements
      
- Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
  in the best case
  in the average case
  in the worst case

### Selection sort

- Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

- Prototype: `void selection_sort(int *array, size_t size);`
      
- You’re expected to print the array after each time you swap two elements
      
- Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
  in the best case
  in the average case
  in the worst case

### Quick sort

- Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

- Prototype: `void quick_sort(int *array, size_t size);`
      
- You must implement the Lomuto partition scheme.
      
- The pivot should always be the last element of the partition being sorted.
      
- You’re expected to print the array after each time you swap two elements
      
- Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
  in the best case
  in the average case
  in the worst case
