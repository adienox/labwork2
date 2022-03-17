// MergeSort algorithm

#include <stdio.h>

void merge(int arr[], int l, int mid, int r)
{
  int n1 = mid - l + 1; // Index of first temp array
  int n2 = r - mid; // Index of second temp array

  // Temp arrays
  int arr1[n1];
  int arr2[n2];

  // Filling temp array with values from parent array
  for (int i = 0; i < n1; i++) {
    arr1[i] = arr[i+l];
  }

  for (int i = 0; i < n2; i++) {
    arr2[i] = arr[mid + 1 + i];
  }

  int i, j, k;
  i = 0; // Pointer of first temp array
  j = 0; // Pointer of second temp array
  k = l; // Pointer of parent array

  // Checking values within the temp arrays
  while (i < n1 && j < n2) {
    if(arr1[i] < arr2[j]){
      arr[k] = arr1[i];
      i++;
    } else {
      arr[k] = arr2[j];
      j++;
    }
    k++;
  }

  // Filling the remaining vales from the temp arrays
  while (i < n1) {
    arr[k] = arr1[i];
    k++; i++;
  }

  while (j < n2) {
    arr[k] = arr2[j];
    k++; j++;
  }
}

// l is the left index value and r is the right index value
void mergeSort(int arr[], int l, int r)
{
  if (l < r){
    int mid = (l+r)/2;

    // Recursive function call for sorting the array
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    
    merge(arr, l, mid, r);
  }
}

int main (int argc, char *argv[])
{
  int arr[] = {3,2,5,6,1,4,7};
  int l = 0, r = 6;

  mergeSort(arr, l, r);

  for (int i = 0; i <= r; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
