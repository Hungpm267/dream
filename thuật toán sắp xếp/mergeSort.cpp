#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 1000; // Giới hạn kích thước mảng
int B[MAX_SIZE], C[MAX_SIZE]; // Mảng tạm để chứa dữ liệu chia nhỏ

void Merge(int A[], int nB, int nC, int k) {
    int p = 0, pb = 0, pc = 0, ib = 0, ic = 0;
    int kb = min(k, nB), kc = min(k, nC);

    while (nB > 0 && nC > 0) {
        if (B[pb + ib] <= C[pc + ic]) {
            A[p++] = B[pb + ib++];
            if (ib == kb) {
                while (ic < kc) A[p++] = C[pc + ic++];
                break;
            }
        } else {
            A[p++] = C[pc + ic++];
            if (ic == kc) {
                while (ib < kb) A[p++] = B[pb + ib++];
                break;
            }
        }
    }

    while (ib < kb) A[p++] = B[pb + ib++];
    while (ic < kc) A[p++] = C[pc + ic++];
}

void MergeSort(int A[], int n) {
    int k = 1;
    while (k < n) {
        int p = 0, pb = 0, pc = 0;

        while (p < n) {
            int i;
            for (i = 0; (p < n) && (i < k); i++) B[pb++] = A[p++];
            for (i = 0; (p < n) && (i < k); i++) C[pc++] = A[p++];
        }

        Merge(A, pb, pc, k);
        k *= 2;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mảng ban đầu: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    MergeSort(arr, n);

    cout << "Mảng sau khi sắp xếp: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
