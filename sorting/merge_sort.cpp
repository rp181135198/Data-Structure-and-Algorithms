#include <bits/stdc++.h>

using namespace std;

void display(int arr[], int size);

void merge(int arr[], int first, int mid, int last) {
    int subArr1 = mid - first + 1;
    int subArr2 = last - mid;
    int firstArr[subArr1];
    int secondArr[subArr2];
    int k=first;
    int i,j;
    // Copy elements to sub array
    for(i=0;i<subArr1;i++)
        firstArr[i] = arr[first+i];
    for(j=0;j<subArr2;j++)
        secondArr[j] = arr[mid+1+j];
    
    i=0;
    j=0;

    while(i<subArr1 && j<subArr2) {
        if(firstArr[i] < secondArr[j]) {
            arr[k++] = firstArr[i++];
        }
        else {
            arr[k++] = secondArr[j++];
        }
    }
    while (i<subArr1) {
        arr[k++] = firstArr[i++];
    }
    while (j<subArr2) {
        arr[k++] = secondArr[j++];
    }
}

void mergeSort(int arr[], int first, int last) {
    if(first<last) {
        int mid = first + (last-first)/2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid+1, last);
        merge(arr, first, mid, last);
    }
}

void mergeSort(int arr[], int size) {
    mergeSort(arr, 0, size-1);
}

void display(int arr[], int size) {
    cout<<"[";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<((i<size-1) ? ", " : "");
    cout<<"]"<<endl;
}

int main()
{
    int arr[5] = {5,3,2,9,4};
    cout<<"Before sorting: ";
    display(arr, 5);
    mergeSort(arr, 5);
    cout<<"After sorting: ";
    display(arr, 5);
    return 0;
}