#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
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
    int a[5] = {5,3,4,9,2};
    cout<<"Before sorting: ";
    display(a, 5);
    bubbleSort(a, 5);
    cout<<"After sorting: ";
    display(a, 5);
    return 0;
}