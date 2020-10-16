#include<stdio.h>

int main(){
    float a[20][20][20];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                a[i][j][k]= i + (j/10.0) + (k/100.0) ;
            }
        }
    }


    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                printf("%.2f \n",a[i][j][k]);
            }
        }
    }

    return 0;

}
