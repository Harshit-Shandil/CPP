#include <iostream>
using namespace std;
int main()

{     
    int arr[4]={10,100,20 ,30};

    int second_largest=-1; int largest=-1;

    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    for(int i=0; i<4; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    cout<<endl<<"Largest:"<<largest;
    
    // int second_largest=0;
    for(int i; i<4; i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    

    cout<<endl<<"secondd largest:"<<second_largest;


    return 0;
}