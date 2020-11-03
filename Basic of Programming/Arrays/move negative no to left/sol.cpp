//quick sort partion approch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
 int j=0;
 for(int i=0;i<n;i++){
     
     if(arr[i]<0){
         if(i!=j)
         swap(arr[i],arr[j]);
         
         j++;
     }
 }
 
 
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
	
    int arr[] = { 1, 2, -3, 4, 5, 6, -7, 9,-8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
	return 0;
}

//two pointer approch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]<0)i++;
        
        if(arr[j]>0)j--;
        
        if(arr[i]>0 && arr[j]<0){
            int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
            j--;
            i++;
        }
        
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
	
    int arr[] = { 1, 2, -3, 4, 5, 6, -7, 9,-8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
	return 0;
}