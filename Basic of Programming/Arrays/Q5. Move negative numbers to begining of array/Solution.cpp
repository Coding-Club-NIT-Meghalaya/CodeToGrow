// C++ program of the above 
// approach
// Time Complexity: O(N)
// Auxiliary Space: O(1)
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to shift all the
// negative elements on left side
void shiftall(int arr[], int left, 
              int right)
{
   
  // Loop to iterate over the 
  // array from left to the right
  while (left<=right)
  {
    // Condition to check if the left
    // and the right elements are 
    // negative
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    // Condition to check if the left 
    // pointer element is positive and 
    // the right pointer element is negative
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the 
    // elements are positive
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  }
}
 
// Function to print the array
void display(int arr[], int right){
   
  // Loop to iterate over the element
  // of the given array
  for (int i=0;i<=right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
 
// Driver Code
int main() 
{
    int N;
    cin>>N;
    int Ar[N];
    for(int i=0;i<N;i++){
        cin>>Ar[i];
    }
    // Function Call
    shiftall(Ar,0,N-1);
    display(Ar,N-1);
    return 0;
}