#include <iostream>

using namespace std;

void findPairsWithSum(int arr[], int n, int S) {
    int left = 0, right = n - 1;

    // sort the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // use two pointers to find pairs with sum S
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == S) {
            cout << "Pair found: " << arr[left] << " " << arr[right] << endl;
            left++;
            right--;
        } else if (currentSum < S) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int S = 16;
    findPairsWithSum(arr, n, S);
    return 0;
}
