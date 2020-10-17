#include <iostream>
using namespace std;


int r=5,c=5;
int arr[5][5]={{1,2,3,9,10},
              {4,5,0,2,24},
              {7,8,9,11,16},
              {1,3,4,10,1},
              {1,2,3,4,5}
            };




void peak_2d(int row,int col){
  int mid=col/2,max=0,max_row;
  for(int i=0;i<row;i++){
    if(max<arr[i][mid]){
      max=arr[i][mid];
      max_row=i;
    }
  }
  if(max<arr[max_row][mid-1]){
    peak_2d(row,mid-1);
  }
  else if(max<arr[max_row][mid+1]){
    peak_2d(row,(col+mid));
  }
  else
    cout<<"Peak : "<<max;
}



int main(){
  peak_2d(r,c);
  return 0;
}
