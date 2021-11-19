#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSortHelper(int arr[], int l, int h) {
    if(l < h) {
        int j = partition(arr, l, h);
        quickSortHelper(arr, l, j);
        quickSortHelper(arr, j+1, h);
    }
}

void quickSort(int arr[], int size) {
    arr[size] = INT32_MAX; // Not safe
    quickSortHelper(arr, 0, size);
}

void display(int arr[], int size) {
    cout<<"[";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<((i<size-1) ? ", " : "");
    cout<<"]"<<endl;
}

int main()
{
    int a[5] = {5,3,4,9,2};
    cout<<"Before sorting: ";
    display(a, 5);
    quickSort(a, 5);
    cout<<"After sorting: ";
    display(a, 5);
    return 0;
}