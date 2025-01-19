#include <iostream>
using namespace std;
int main()

{
    
    int i=0; 
    int n=0;
    cout<< "Enter n" <<endl;
    cin>>n;
    int arr[n]={0};
    
    cout<<"Insert values :";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<< "Printing inserted values" <<endl;
     for (i=0; i<n; i++)
    {
        cout<< arr[i] <<" ";

    }
    cout<<endl;

    cout<<"Adding elements of array"<<endl;
    int sum=0;  int count=0;
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
        // count++;
        // cout<<count<<" ";
        //cout<<"sum"<<sum<<endl;
    }
    cout<<"sum:"<<sum<<endl;
    
    
    return 0;
}