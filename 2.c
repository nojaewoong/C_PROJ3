/*

2. ȭ��ǥ Ű�� ���� ���ڸ� ������Ű�ų� ���ҽ�Ű�� ���α׷��� �ۼ��Ͻÿ�.

�⺻ ���� 1000�� ���� ���� ���� ȭ��ǥ Ű�� �Է��ϸ� ���ڸ� ������Ű��,

�Ʒ��� ���� ȭ��ǥ Ű�� �Է��ϸ� ���ڸ� �����ϰ� �մϴ�.

���� ���� ȭ��ǥ Ű�� ������ ���� ȭ��ǥ Ű�� �����ϰų� ������ų ������ �����ϵ��� �մϴ�

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

               printf("����/���� ��Ű�� ����:%d", solo);

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
