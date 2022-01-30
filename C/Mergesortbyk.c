#include <stdio.h>
 


//function declaration
void mergeSort(int *a, int beg, int end,int size);
void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend,int SIZE);  //l = left sub array and r = right sub array

int main(){
    int SIZE;
    printf("Enter the size of array:");
    scanf("%d",&SIZE);
    printf("Enter the elements:");
    int i,a[SIZE];
    for(i=0;i<SIZE;i++){
        scanf("%d",&a[i]);
    } //array to sort in  ascending order
  mergeSort(a, 0, SIZE-1,SIZE);  
  printf("The sorted list is:");
    for(i = 0; i < SIZE; i++){
    printf(" %d\t", a[i]);
  }
  return 0;
}

void mergeSort(int *a, int beg, int end,int size){
  int mid;
  if(beg < end){
    mid = (beg+end)/2;
    mergeSort(a, beg, mid,size);
    mergeSort(a, mid+1, end,size);
    mergeSortedArray(a, beg, mid, mid+1, end,size);
  }
}

void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend,int SIZE){
  int pa = lbeg, pb = rbeg, pt = lbeg, tmp[SIZE];
  while(pa <= lend && pb <= rend){
    if(a[pa] < a[pb]){
      tmp[pt++] = a[pa++];
    }else{
      tmp[pt++] = a[pb++];
    }
  }
  if(pa > lend){
    while(pb <= rend){  //left sub array exhausted
      tmp[pt++] = a[pb++];
    }
  }else{
    while(pa <= lend){  //right sub array exhausted
      tmp[pt++] = a[pa++];
    }
  }
  
  //write sorted element in array a
  for(pt = lbeg; pt <= rend; pt++){
    a[pt] = tmp[pt];
  }
}