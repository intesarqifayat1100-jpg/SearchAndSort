#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

// Assumes arr is sorted in ascending order.
int findRightNeighbor(int arr[], int size, int target) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int middle = first + (last - first) / 2;
        if (arr[middle] == target) {
            if (middle + 1 < size) {
                return arr[middle + 1];
            }
            return -1;
        } else if (arr[middle] < target) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    return -1;
}

// Assumes ids is sorted in ascending order and aligned with scores.
double getScoreByID(int ids[], double scores[], int size, int targetID) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int middle = first + (last - first) / 2;
        if (ids[middle] == targetID) {
            return scores[middle];
        } else if (ids[middle] < targetID) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    return -1.0;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Assumes arr is sorted in ascending order.
int binarySearch(int arr[], int size, int target) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int middle = first + (last - first) / 2;
        if (arr[middle] == target) {
            return middle;
        } else if (arr[middle] < target) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    return -1;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << (i + 1 < size ? " " : "");
    }
    cout << endl;
}

int main() {
    int unsorted[] = {29, 10, 14, 37, 14, 10};
    int size = 6;

    cout << "Occurrences of 14: " << countOccurrences(unsorted, size, 14) << endl;
    cout << "Linear search for 37 (index): " << linearSearch(unsorted, size, 37) << endl;

    int selArr[] = {29, 10, 14, 37, 14, 10};
    selectionSort(selArr, size);
    cout << "After selectionSort: ";
    printArray(selArr, size);

    int insArr[] = {64, 25, 12, 22, 11, 90};
    int insSize = 6;
    insertionSort(insArr, insSize);
    cout << "After insertionSort: ";
    printArray(insArr, insSize);

    cout << "Binary search for 22 (index): " << binarySearch(insArr, insSize, 22) << endl;
    cout << "Right neighbor of 22: " << findRightNeighbor(insArr, insSize, 22) << endl;

    int ids[] = {101, 104, 108, 115, 120};
    double scores[] = {88.5, 92.0, 79.5, 95.5, 84.0};
    cout << "Score for ID 115: " << getScoreByID(ids, scores, 5, 115) << endl;

    return 0;
}
