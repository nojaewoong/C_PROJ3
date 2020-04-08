/*

2. 화살표 키를 눌러 숫자를 증가시키거나 감소시키는 프로그램을 작성하시오.

기본 숫자 1000에 대해 위쪽 방향 화살표 키를 입력하면 숫자를 증가시키고,

아래쪽 방향 화살표 키를 입력하면 숫자를 감소하게 합니다.

왼쪽 방향 화살표 키와 오른쪽 방향 화살표 키는 감소하거나 증가시킬 단위를 조절하도록 합니다

*/

#include <stdio.h>

#include <conio.h>

#include <Windows.h>

 

#define X_MAX 79

#define Y_MAX 24

 

void gotoxy(int x, int y);

void move_arrow_sel(char sel, int *basic, int *solo);

 

int main(void)

{

        char sel;

        int basic = 1000;

        int solo = 1;

        do

        {

               gotoxy(20, 10);

               printf("증가/감소 시키는 단위:%d", solo);

               gotoxy(20, 5);

               printf("%d", basic);

                sel = getch();

               move_arrow_sel(sel, &basic, &solo);

        } while (sel != 27);

        return 0;

}

 

void gotoxy(int x, int y)

{

        COORD Pos = { x - 1, y - 1 };

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

 

void move_arrow_sel(char sel, int *basic, int *solo)

{

        switch (sel)

        {

        case 72:

               *basic = *basic + *solo;

               break;

        case 75:

               *solo = *solo - 1;

               if (*solo < 1) 

                       *solo = 1;

               break;

        case 77:

               *solo = *solo + 1;

               break;

        case 80:

               *basic = *basic - *solo;

               if (*basic < 100) 

                       *basic = 100;

               break;

        default:

               return;

        }

}
