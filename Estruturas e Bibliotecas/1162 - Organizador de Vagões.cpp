#include <iostream>
#include <vector>

using namespace std;

long long int merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++) 
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++) 
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    long long int inversions = 0;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            inversions += (n1 - i);
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    return inversions;
}

long long int mergeSort(vector<int>& arr, int left, int right) {
    long long int inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        inversions += mergeSort(arr, left, mid);
        inversions += mergeSort(arr, mid + 1, right);

        inversions += merge(arr, left, mid, right);
    }

    return inversions;
}

int main() {
    
    int N, L;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        cin >> L;
        cin.ignore();

        vector<int> trem(L);
        for(int j = 0; j < L; j++) {
            cin >> trem[j];
        }

        cout << "Optimal train swapping takes " << mergeSort(trem, 0, L - 1) << " swaps." << endl;

    }

    return 0;
}
