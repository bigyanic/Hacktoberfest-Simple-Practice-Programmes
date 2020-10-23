#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std; 

int a[10][10] = { 0 };   

void island(int Y, int X, int size){
    if(X > size || Y > size || X < 0 || Y < 0){
        return;
    }

    if (!a[Y][X]){
     return;
    }

	a[Y][X] = 0;
	island(Y + 1, X, size);
    island(Y, X + 1, size);
    island(Y - 1, X, size);
    island(Y, X - 1, size);
}

int main(){ 
    string number;
	int Y = 0, X, num, sum = 0;

	while (getline(cin, number)){
		X= 0;
		num = 0;
		while(number[num] != '\0'){
			if(number[num] == '1'){
				a[Y][X] = 1;
				X++;
			}

			else if(number[num] == '0'){
				a[Y][X] = 0;
				X++;
			}
			num++;
		}
		Y++;

		if(Y == X){
			break;
		}
	}

    for (int i = 0; i < X; i++){ 
        for (int j = 0; j < Y; j++) 
            if(a[i][j]){
			    island(i, j, X);
                sum++;
            }
    } 

	printf("%d\n",sum);
    return 0;
} 