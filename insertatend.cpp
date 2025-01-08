#include <bits/stdc++.h>
using namespace std;

// insert at end  and at POSITION

// n is the current size of an array,
// capacity will be variable using the formula

// int insertatend(int arr[], int n, int key,int capacity){
//     for(int i=0; i<n; i++)
//     {
//         if (n >= capacity)
//         return n;
        
//         else{
//             arr[n] = key;
//             return (n + 1);
//         }
       
//     }
// } 


int insertatpos(int arr[],int n, int element,int pos)
{
    // for(int i= n-1; i>=pos; i--)
    // {
    //     arr[i+1]=arr[i];

    // }arr[pos]=element;

    // using while loop
    // int i=n-1;
    // while(i>=pos)
    // {
    //     arr[i+1]=arr[i];
    //     i--;
    // }
    // arr[pos]=element;

    // 3rd approach  using temp_array[n+1] and reverse array 
    int temp[n + 1];  
    for (int i = 0; i < pos; i++) {
       temp[i] = arr[i];  
     }
    temp[pos] = element;  
    for (int i = pos; i < n; i++) {
       temp[i + 1] = arr[i];  
     }

    
    for (int i = 0; i <= n; i++) {
    arr[i] = temp[i];
    }


    
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
    
    // int arr[20]={10,20,30,40};
    // int n=4;
    // int capacity= sizeof(arr)/sizeof(arr[0]);
    // int key; cin>> key; 
    // cout<< "Entered no. to add in array is "<<key<<endl;
    
    
    // cout<<"Before insertion at end ";
    // display(arr,n);

    // n=insertatend(arr,n,key, capacity);
    
    // cout<<endl;
    // cout <<"After insertion ";
    // display(arr,n);
    

    // ==============
    int arr[15]={10,20,30,40};
    int n=4; //current size
    int element=55; int pos=2;

    cout<<"Before insertion at end ";
    display(arr,n);
    
    insertatpos(arr,n,element,pos);
    n++;

    cout<<endl;
    cout <<"After insertion ";
    display(arr,n);


             

    return 0;
}


