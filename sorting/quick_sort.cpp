#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int pivot = arr[(left+right)/2];
    
    // Partition
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if(i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    // Recursion
    if(left < j)
        quickSort(arr, left, j);
    if(i < right)
        quickSort(arr, i, right);
}

void quickSort(int arr[], int size) {
    quickSort(arr, 0, size-1);
}

void display(int arr[], int size) {
    cout<<"[";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<((i<size-1) ? ", " : "");
    cout<<"]"<<endl;
}

int main()
{
    int a[5] = {5,3,2,9,4};
    cout<<"Before sorting: ";
    display(a, 5);
    quickSort(a, 5);
    cout<<"After sorting: ";
    display(a, 5);
    return 0;
}