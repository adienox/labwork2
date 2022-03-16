// Arranging an array with two sorted sections

#include <stdio.h>

void merge(int arr[],int l,int mid,int r)
{
  // n1 is the length of arr1. The first array should be of the length up to and including the mid of the original array.
  int n1 = mid;
  // n2 is the length of arr2. The second array should be of the length from the mid of the original array to the last.
  int n2 = r-(mid+1);

  int arr1[n1];
  int arr2[n2];

  // Adding values from the original array up to and including the mid point.
  for (int i = l; i <= n1; i++) {
    arr1[i] = arr[i]; 
  }

  // Adding values from the original array starting from mid point and up to the last.
  for (int i = 0; i <= n2; i++) {
    arr2[i] = arr[mid+1+i]; 
  }

  // Initializing pointer variables. Here i,j and k points to the index to arr1, arr2 and arr respectively.
  int i, j, k;
  i = j = k = 0;

  // Checking the values in the two arrays namely arr1 and arr2.
  while (i <= n1 && j <= n2) {
  // If the value in i position of arr1 is smaller than value in j position of arr2, add that value to the k position of arr array.
    if (arr1[i] < arr2[j]) {
      arr[k] = arr1[i];
      k++; i++;
    }
  // Else if the value in j position of arr2 is smaller than value in i position of arr1, add that value to the k position off arr array.
    else if (arr2[j] < arr1[i]) {
      arr[k] = arr2[j];
      k++; j++;
    }
  // Else if both the values are equal, add both the values to arr array in position k and k+1 and increase the k pointer by 2 and increase the pointer of both arr1 and arr2.
    else {
      arr[k] = arr1[i];
      arr[k+1] = arr2[j];
      k += 2; i++; j++;
    }
  }
 
  // Since && operator was used in the while loop, one of the values either i or j will not have reached the end of the arr1 or arr2 respectively.
  // For that the following two loops are used.
  while(i <= n1){
    arr[k]= arr1[i];
    k++; i++;
  }
  
  while(j <= n2){
    arr[k]= arr2[j];
    k++; j++;
  }
}

int main (int argc, char *argv[])
{
  
  int arr[] = {3,5,6,8,1,2,4,7};

  int l = 0, r = 7, mid;
  mid = (l+r)/2;

  merge(arr, l, mid, r);

  for (int i = 0; i <= 7; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
