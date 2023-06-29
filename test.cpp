#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Visualization code
        system("clear");  // For Linux/Mac, use "cls" for Windows
        for (int k = 0; k < n; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;

        #ifdef _WIN32
        Sleep(500);  // Sleep for 500 milliseconds on Windows
        #else
        usleep(500000);  // Sleep for 500 milliseconds on POSIX systems
        #endif

        if (!swapped)
            break;
    }
}

int main() {
    std::vector<int> arr = {5, 2, 7, 1, 3};

    std::cout << "Initial array: ";
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;

    bubbleSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
