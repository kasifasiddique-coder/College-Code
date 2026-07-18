#include <stdio.h>

int binarySearch(int arr[], int n, int num) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, num = 30;
    int result = binarySearch(arr, n, num);

    if (result != -1)
        printf("Number found at index %d\n", result);
    else
        printf("Number not found\n");

    return 0;
}

