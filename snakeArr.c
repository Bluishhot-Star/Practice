
//

//  Cproject

//

//  Created by kassid on 2021/12/19.

//



#include <stdio.h>



void makeArr();



int main(void) {



    makeArr();



    return 0;

}

void makeArr() {

    int arr[20][20];

    int num = 1; // number (1~)

    int col = 0; // column

    int row = -1; // row

    int direct = 1; // switch set1,2

    int len = 0; // the length of column

    printf("set the length(1~20) : ");

    scanf("%d", &len); // input the len

    for (int i = 0; i < len; i++) {

        arr[col][++row] = num++; //fill arr[col==0]

    }

    // SET : 1.(down, left) 2.(up, right)

    for (int j = len - 1; j > 0; j--) { // Total number of set repitation

        for (int a = 0; a < j; a++) {   //down or up

            if (direct == 1) {    //down

                col++;

            }

            else {   //up

                col--;

            }

            arr[col][row] = num++;

        }

        for (int b = 0; b < j; b++) {   //left or right

            if (direct == 1) {    //left

                row--;

            }

            else {   //right

                row++;

            }

            arr[col][row] = num++;

        }

        direct *= -1;   //switch set

    }

    for (int i = 0; i < len; i++) {     //print arr

        for (int j = 0; j < len; j++) {

            printf("%3d ", arr[i][j]);

        }

        printf("\n");

    }



}

