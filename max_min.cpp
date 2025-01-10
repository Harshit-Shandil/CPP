#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={10,5,60 ,30 ,40,100,80};

    // int max= arr[0];        
    
    

    // cout<<max<<endl;
    // for (int i=0; i<7; i++)
    // {    
    //         if (max <arr[i])    
    //         {    
    //             max = arr[i];    
    //         }    
    // }   
    //     cout<< "Maximum element is: "<< max <<"\n";  
    






        
        int n = sizeof(arr)/ sizeof(arr[0]);

  int mini = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i]<mini)
      mini = arr[i];
  }

  cout<<mini;  

return 0;

}