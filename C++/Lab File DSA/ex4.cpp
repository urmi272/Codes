#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {5, 2, 4, 6, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {5, 2, 4, 6, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {5, 2, 4, 6, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }
