#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
//*
// sorted = false
//while (not sorted):
//   sorted = true
//   moo
//   for i = 0 to N-2:
//      if A[i+1] < A[i]:
//         swap A[i], A[i+1]
//         sorted = false
// */
// A function to implement bubble sort
//void bubbleSort(int arr[], int n)
//{
//    int i, j;
//    for (i = 0; i < n-1; i++)
//
//        // Last i elements are already in place
//        for (j = 0; j < n-i-1; j++)
//            if (arr[j] > arr[j+1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//}
//int cowSort(int arr[], int n) {
//    int moo = 0;
//    bool sorted = false;
//    while (not sorted) {
//        moo++;
//        sorted = true;
//        for (int i = 0; i <= n-2; ++i) {
//            if (arr[i] > arr[i+1]) {
//                int temp = arr[i];
//                arr[i] = arr[i+1];
//                arr[i+1] = temp;
//                sorted = false;
//            }
//        }
//    }
//    return moo;
//}
//
//* Function to print an array */
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}

vector<int> createSorted(int a[], int n)
{
    // Auxiliary Array
    vector<int> b;

    for (int j = 0; j < n; j++) {
        // if b is empty any element can be at
        // first place
        if (b.empty())
            b.push_back(a[j]);
        else {

            // Perform Binary Search to find the correct
            // position of current element in the
            // new array
            int start = 0, end = b.size() - 1;

            // let the element should be at first index
            int pos = 0;

            while (start <= end) {

                int mid = start + (end - start) / 2;

                // if a[j] is already present in the new array
                if (b[mid] == a[j]) {
                    // add a[j] at mid+1. you can add it at mid
                    b.emplace(b.begin() + max(0, mid + 1), a[j]);
                    break;
                }
                    // if a[j] is lesser than b[mid] go right side
                else if (b[mid] > a[j])
                    // means pos should be between start and mid-1
                    pos = end = mid - 1;
                else
                    // else pos should be between mid+1 and end
                    pos = start = mid + 1;

                // if a[j] is the largest push it at last
                if (start > end) {
                    pos = start;
                    b.emplace(b.begin() + max(0, pos), a[j]);

                    // here max(0, pos) is used because sometimes
                    // pos can be negative as smallest duplicates
                    // can be present in the array
                    break;
                }
            }
        }

    }
    return b;
}

int main() {
    int N;
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    cin >> N;
    int B[N];
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    vector<int> F = createSorted(B, N);
    int max = 0;
    for (int i = 0; i < N; ++i) {
        int x = std::distance(B, std::find(B, B + N, i));
        int y = std::distance(F.begin(), std::find(F.begin(), F.end(), i));
        max = (abs(x-y) > max) ? abs(x-y) : max;
    }
    cout << (max + 1);
    return 0;
}
