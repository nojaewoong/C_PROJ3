/*

4. 함수 rand를 이용하여 1-6 사이의 주사위 눈금 1,000개를 생성하고, 각 눈금의 빈도수에 대한 확률을 계산하시오.

*/

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

 

int main(void)

{
        int i;

        int array[1000]; 

        int chance[6] = { 0, }; 

        srand((unsigned)time(NULL));

        for (i = 0; i < 1000; i++)

        {

               array[i] = rand() % 6 + 1;

        }

        for (i = 0; i < 1000; i++)

        {

               switch (array[i])

               {

               case 1:

                       chance[0]++;

                       break;

               case 2:

                       chance[1]++;

                       break;

               case 3:

                       chance[2]++;

                       break;

               case 4:

                       chance[3]++;

                       break;

               case 5:

                       chance[4]++;

                       break;

               case 6:

                       chance[5]++;

                       break;

               }

        }

        for (i = 1; i < 7; i++)

        {

               

               printf("주사위를 돌릴 때 %d 눈금이 나올 확률은:%g\n", i, (double)(chance[i] / 1000.0));

        }

        return 0;

}
