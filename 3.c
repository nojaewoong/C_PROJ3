/*

3. 다음과 같은 메뉴에 의해 실제 값을 입력받아 해당 연산을 처리하는 프로그램을 작성하시오.

메인메뉴 서브메뉴
1. 사칙연산 1.1 덧셈 연산 1.2 뺄셈 연산
1.3 나눗셈 연산 1.4 곱셈 연산
1.5 나머지 연산 1.6 메인 메뉴로 이동

2. 로그 연산 2.1 자연로그 연산 2.2 상용로그 연산
2.3 메인 메뉴로 이동

3. 종료

*/

#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <math.h>

 

int menu_display(void);

int sub_menu_display01(void);

int sub_menu_display02(void);

void sub_main01(void);

void sub_main02(void);

 

void add(void);

void subtract(void);

void multiply(void);

void divide(void);

void remain(void);

void press_any_key(void);

 

void naturallog(void);

void decimallog(void);

 

int main(void)

{

        int c;

        while ((c = menu_display()) != 3)

        {

               switch (c)

               {

               case 1:

                       sub_main01();

                       break;

               case 2:

                       sub_main02();

                       break;

               default:

                       break;

               }

        }

        return 0;

}

 

int menu_display(void)

{

        int select;

        system("cls");

        printf("1. 사칙 연산\n");

        printf("2. 로그 연산\n");

        printf("3. 프로그램 종료\n\n");

        printf("메뉴번호 입력>");

        select = getch() - 48;

        return select;

}

 

void sub_main01(void)

{

        int c;

        while ((c = sub_menu_display01()) != 6)

        {

               switch (c)

               {

               case 1:

                       add();

                       break;

               case 2:

                       subtract();

                       break;

               case 3:

                       divide();

                       break;

               case 4:

                       multiply();

                       break;

               case 5:

                       remain();

                       break;

               default:

                       break;

               }

        }

}

 

void sub_main02(void)

{

        int c;

        while ((c = sub_menu_display02()) != 3)

        {

               switch (c)

               {

               case 1:

                       naturallog();

                       break;

               case 2:

                       decimallog();

                       break;

               default:

                       break;

               }

        }

}

 

int sub_menu_display01(void)

{

        int select;

        system("cls");

        printf("1. 사칙 연산\n\n");

        printf("1.1 덧셈 연산\t");

        printf("1.2 뺄셈 연산\n");

        printf("1.3 나눗셈 연산\t");

        printf("1.4 곱셈 연산\n");

        printf("1.5 나머지 연산\t");

        printf("1.6 메인 메뉴로 이동\n");

        select = getch() - 48;

        return select;

}

 

int sub_menu_display02(void)

{

        int select;

        system("cls");

        printf("2. 로그 연산\n\n");

        printf("2.1 자연로그 연산\t");

        printf("2.2 상용로그 연산\n");

        printf("2.3 메인 메뉴로 이동\n");

        select = getch() - 48;

        return select;

}

 

void add(void)

{

        int num1, num2;

        printf("정수 입력(첫번째,두번째):");

        scanf("%d %d", &num1, &num2);

        printf("%d+%d=%d\n", num1, num2, num1 + num2);

        press_any_key();

}

 

void subtract(void)

{

        int num1, num2;

        printf("정수 입력(첫번째,두번째):");

        scanf("%d %d", &num1, &num2);

        printf("%d-%d=%d\n", num1, num2, num1 - num2);

        press_any_key();

}

 

void divide(void)

{

        int num1, num2;

        printf("정수 입력(첫번째,두번째):");

        scanf("%d %d", &num1, &num2);

        printf("%d/%d=%d\n", num1, num2, num1 / num2);

        press_any_key();

}

 

void multiply(void)

{

        int num1, num2;

        printf("정수 입력(첫번째,두번째):");

        scanf("%d %d", &num1, &num2);

        printf("%d*%d=%d\n", num1, num2, num1 * num2);

        press_any_key();

}

 

void remain(void)

{

        int num1, num2;

        printf("정수 입력(첫번째,두번째):");

        scanf("%d %d", &num1, &num2);

        printf("(%d)%%(%d)=%d\n", num1, num2, num1 % num2);

        press_any_key();

}

 

void press_any_key(void)

{

        printf("\n\n");

        printf("이전 메뉴로(Any key)");

        getch();

}

 

void naturallog(void)

{

        double num;

        printf("입력:");

        scanf("%lf", &num);

        printf("%f의 자연로그연산 값은  %f\n", num, log(num));

        press_any_key();

}

 

void decimallog(void)

{

        double num;
 
        printf("입력:");

        scanf("%lf", &num);

        printf("%f의 로그연산 값은 %f\n", num, log10(num));

        press_any_key();

}
