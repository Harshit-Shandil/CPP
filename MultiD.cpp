#include <iostream>
using namespace std;
int main()

{     // [2][3]=6 and [2][3][4]=24 items
   //   arr[i][j] 
    int arr[2][3]={{3,2,1},{1,2,3}};
    int arr2[2][3][4]={
        {{1,1,1,1},{11,12,13,14}, {21,22,23,24}},
        { {1,1,1,1},{11,12,13,14}, {21,22,23,24}}
    };
    
    for(int i=0; i<2; i++)
    {
        
       for(int j=0; j<3; j++)
       {
        for(int k=0; k<4; k++)
        {
          cout<< arr2[i][j][k] <<" ";
        }
       }
    }


    // int i=0; 
    // int n=0;
    // cout<< "Enter n" <<endl;
    // cin>>n;
    // int arr[n]={0};
    
    // cout<<"Insert values :";
    // for (i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // cout<< "Printing inserted values" <<endl;
    //  for (int i=0; i<n; i++)
    // {
    //     cout<< arr[i] <<" ";
    // }

    return 0;
}