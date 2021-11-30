#include <bits/stdc++.h>

using namespace std;

void display(int arr[], int size);

void selectionSort(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        int index = i;
        for(int j=i+1; j<size; j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
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
    selectionSort(a, 5);
    cout<<"After sorting: ";
    display(a, 5);
    return 0;
}