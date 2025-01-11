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


    return 0;
}