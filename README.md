# C++ Array Search & Sorting Utilities

A C++ console program demonstrating foundational array search and sorting algorithms, including linear and binary search, occurrence counting, right-neighbor lookup, parallel-array lookup by ID, and selection and insertion sorts.

## Functions Included
- **`countOccurrences(arr, size, target)`:** Counts how many times `target` appears in an integer array.
- **`linearSearch(arr, size, target)`:** Scans sequentially to return the index of `target`, or `-1` if not found.
- **`binarySearch(arr, size, target)`:** Searches a sorted ascending array in `O(log n)` time and returns the matching index or `-1`.
- **`findRightNeighbor(arr, size, target)`:** Uses binary search on a sorted ascending array to find `target` and return the value immediately to its right (`-1` if at the end or not found).
- **`getScoreByID(ids, scores, size, targetID)`:** Uses binary search on a sorted `ids` array to return the corresponding score from the aligned `scores` array (`-1.0` if not found).
- **`selectionSort(arr, size)`:** Sorts an integer array ascending in place by repeatedly selecting the minimum remaining element.
- **`insertionSort(arr, size)`:** Sorts an integer array ascending in place by shifting each element left into its sorted position.

## Compiling & Running
Compile with `g++` (C++17) and run from the terminal:

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o main
./main
