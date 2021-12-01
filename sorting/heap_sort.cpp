#include <bits/stdc++.h>

using namespace std;

void display(int arr[], int size);

void heapify(int arr[], int size, int i)
{
    int largest = i;   // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < size && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < size && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // One by one extract an element from heap
    for (int i = size - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void display(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << arr[i] << ((i < size - 1) ? ", " : "");
    cout << "]" << endl;
}

int main()
{
    int a[5] = {5, 3, 2, 9, 4};
    cout << "Before sorting: ";
    display(a, 5);
    heapSort(a, 5);
    cout << "After sorting: ";
    display(a, 5);
    return 0;
}