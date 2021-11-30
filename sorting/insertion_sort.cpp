#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        int element = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            if(arr[j] > element) {
                swap(arr[j], arr[j+1]);
            } else {
                break;
            }
        }
        arr[j+1] = element;
    }
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
    insertionSort(a, 5);
    cout<<"After sorting: ";
    display(a, 5);
    return 0;
}