/*!
 * \file quicksort2.cc
 * \brief Quicksort 2 -Sorting from HackerRank
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int partition(vector<int> &arr, int lo, int hi) {
    int guard = arr[lo],
        left = lo + 1,
        right = hi;

    while (left <= right) {
        while (arr[left] < guard) left++;
        while (arr[right] > guard) right--;

        if (left <= right) {
            swap(arr[left++], arr[right--]);
        }
    }

    swap(arr[right], arr[lo]);

    /* for (int i = lo; i < hi; i++) { */
    /*     cout << arr[i] << " "; */
    /* } */
    /* cout << arr[hi] << endl; */

    return right + 1;
}

void _quickSort(vector<int> &arr, int lo, int hi) {
    if (lo < hi) {
        int sep = partition(arr, lo, hi);
        _quickSort(arr, lo, sep-1);
        _quickSort(arr, sep+1, hi);

        for (int i = lo; i < hi; i++) {
            cout << arr[i] << " ";
        }
        cout << arr[hi] << endl;
    }
}

void quickSort(vector<int> &arr) {
    _quickSort(arr, 0, arr.size() - 1);
}

int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < (int)n; i++) {
        cin >> arr[i];
    }

    quickSort(arr);

    /* for (int i = 0; i < arr.size() - 1; i++) { */
    /*     cout << arr[i] << " "; */
    /* } */
    /* cout << arr[arr.size() - 1] << endl; */

    return 0;
}
