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

 

int display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    
    
    int arr[]={10,20,30,40};

    int size= sizeof(arr)/sizeof(arr[0]);
    
    
    // insertion(arr, size);
    display(arr,size);

    int key;  cout<<"Enter key:";
    cin>>key;
    // linear(arr,size,key);

    int position = linear(arr, size, key);

    if (position == -1)
        cout << "Element not found";
    else
        cout << "Element Found at Position: "<<position+1;
             

    return 0;
}