/*!
 * \file select2.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016-11-14
 * \license MIT
 */

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

#define DEBUG
// #undef DEBUG

#define LOCAL
// #undef LOCAL

#ifdef LOCAL
#include <fstream>
#endif

static int r = 5;      ///< separte array into groups, each group-array contains r elements

/// \brief insertion sort algorithm implementation
/// \param arr array
/// \param lo  lowest limit of array
/// \param hi  highest limit of array
/// \return void
void insertionSort(vector<int> &arr, int lo, int hi) {
    for (int i = 1; i < hi + 1; i++) {
        for (int j = i; j > lo && arr[j - 1] > arr[j]; j--) {
            swap(arr[j - 1], arr[j]);
        }
    }
}

/// \brief partition algorithm implementation
/// \param arr array
/// \param lo  lowest limit of array
/// \param hi  highest limit of array
/// \return index of guard element(separation position)
static int partition(vector<int> &arr, int lo, int hi) {
    int guard = lo,     ///< the index of guard element
        ge = hi + 1;    ///< the limit of greater/equal element area

    // move all of elements greater than or equal to guard element to the right area of array
    for (int i = hi; i > guard; i--) {
        if (arr[i] >= arr[guard]) {
            swap(arr[--ge], arr[i]);
        }
    }

    // move guard element to correct position
    swap(arr[--ge], arr[guard]);

    return ge;
}

/// \brief group select algorithm implementation(iteration version)
///
/// move median of array to arr[lo], invoke partition(arr, lo, hi) take median as guard.
/// then take spot as reuturn value of partition, judge result with relationship between spot-lo+1 and kth to
/// decide to return or search left-part of arr or right-part of arr.
///
/// \param arr array with non-repeating elements and size bigger than r
/// \param kth expect the kth largest element in array
/// \param lo  lowest limit of array
/// \param hi  highest limit of array
/// \return index of kth element
static int _select2(vector<int> &arr, int kth, int lo, int hi) {
    while (1) {
        int n  = hi - lo + 1;       ///< number of elements locating in lo:hi range

        if (n <= r) {
            insertionSort(arr, lo, hi);
            return (kth + lo - 1);
        }

        /* start of getting median of medians */

        int glo, ghi;               ///< lo and hi of each group-array
        int median;                 ///< index of median of each group-array
        int middle = ceil(r/2.0);   ///< constant represent middle index of group-array

        for (int i = 0; i < n/r; i++) {
            // sort each group-array(sub-array)
            glo = lo + i*r;
            ghi = lo + (i + 1)*r - 1;
            insertionSort(arr, glo, ghi);

            // collect medians in front part of arr[lo:hi];
            median = lo + i*r + middle - 1;
            swap(arr[lo + i], arr[median]);
        }

        // select ceil(n/r/2) largest element from medians-array(in front part of arr[lo:hi])
        int mmiddle = ceil(n/r/2.0);    ///< middle index of medians-array
        int mhi     = lo + n/r - 1;     ///< upper limit of medians-array
        int spot = _select2(arr, mmiddle, lo, mhi);

        // move median of medians-array to arr[lo]
        swap(arr[lo], arr[spot]);

        /* end of getting median of medians */

        // invoke partition with arr[lo](median of medians-array) as guard
        spot = partition(arr, lo, hi);

        if (kth == spot - lo + 1) {
            return spot;
        } else if (kth < spot - lo + 1) {
            hi = spot - 1;
        } else {
            kth -= (spot - lo + 1);
            lo = spot + 1;
        }
    }
}

/// \brief wrapper function
/// \param arr array with non-repeating elements
/// \param kth expect the kth largest element in array
/// \return the value of kth largest element
int select2(vector<int> arr, int kth) {
    if ((int)arr.size() <= r) {
        insertionSort(arr, 0, arr.size() - 1);
        return kth > 0 ? arr[kth - 1] : 0;
    } else {
        return kth > 0 ? arr[_select2(arr, kth, 0, arr.size() - 1)] : 0;
    }
}

int main(void) {
#ifdef LOCAL
    freopen("input.dat", "r", stdin);
#endif

    int n, kth;
    vector<int> arr;
    vector<int> brr;

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            arr.push_back(v);
            brr.push_back(v);
        }

        insertionSort(brr, 0, brr.size() - 1);

#ifdef DEBUG
        cout << "[sorted] ";
        for (int i = 0; i < (int)brr.size() - 1; i++) {
            cout << brr[i] << " ";
        }
        cout << brr[brr.size() - 1] << endl;
#endif // DEBUG

        do {
            cin >> kth;
            cout << "[unsorted] the " << kth << " largest element = " << select2(arr, kth) << endl;

#ifdef DEBUG
            for (int i = 0; i < (int)arr.size() - 1; i++) {
                cout << arr[i] << " ";
            }
            cout << arr[arr.size() - 1] << endl;
#endif // DEBUG

        } while (kth < (int)arr.size());

        arr.clear();
        brr.clear();
    }

    return 0;
}
