#include <bits/stdc++.h>
using namespace std;

// linear and binary 

int linear(int arr[], int n, int key)
{
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = linear(arr, n, key);

    if (pos == -1) {
        cout << "Element not found";
        return n;
    }

    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)  // reducing size// and to increase: i=n-1; i<=pos; i++ :: arr[i+1]=arr[i]
        arr[i] = arr[i + 1];

    return n - 1;
}

 

int display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
    
    int arr[]={10,20,30,40};

    int n= sizeof(arr)/sizeof(arr[0]);
    
    int key=30;
    // insertion(arr, size);
    
    display(arr, n);

    n = deleteElement(arr, n, key);
    
    cout<<endl;
    display(arr, n);
    
             

    return 0;
}