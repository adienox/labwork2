// Merging two sorted array to a single array

#include <stdio.h>

void merge(int arr[],int l,int mid,int r)
{

  int arr1[mid];
  int arr2[r-(mid+1)];
  

  for (int i = l; i <= mid; i++) {
    arr1[i] = arr[i]; 
  }

  for (int i = mid+1; i <= r; i++) {
    arr2[i-(mid+1)] = arr[i]; 
  }

  int i, j, k;
  i = j = k = 0;

  while (i < 4 && j < 4) {
    if (arr1[i] < arr2[j]) {
      arr[k] = arr1[i];
      k++; i++;
    } else {
      arr[k] = arr2[j];
      k++; j++;
    }
  }

  while(i < 4){
    arr[k]= arr1[i];
    k++; i++;
  }

  while(j < 4){
    arr[k]= arr2[j];
    k++; j++;
  }

}

int main (int argc, char *argv[])
{
  
  int arr[] = {3,5,6,8,1,2,4,7};

  int l = 0, r = 7, mid;
  mid = (l+r)/2;

  merge(arr, l, r, mid);

  for (int i = 0; i <= 7; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
