/*

1. 아래와 같이 가로방향의 구구단을 출력하되 아무키나 누르면 화면을 지우고 다음 단을 출력하는 프로그램을 작성하시오.


1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9


2*1=2 2*2=4 2*3=6 2*4=8 2*5=10 2*6=12 2*7=14 2*8=16 2*9=18

*/

#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

 

int main(void)

{
	
	int i,j = 0;

        for (i = 0; i < 9; i++)

        {

               for (j = 0; j < 9; j++)

               {

                       printf("%d*%d=%d\t", i + 1, j + 1, (i + 1)*(j + 1));
 
               }

               printf("\n");

               printf("아무키나 입력하시오");

               getch();

               system("cls");

        }

        return 0;

}
