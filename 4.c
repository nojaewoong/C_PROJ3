/*

4. �Լ� rand�� �̿��Ͽ� 1-6 ������ �ֻ��� ���� 1,000���� �����ϰ�, �� ������ �󵵼��� ���� Ȯ���� ����Ͻÿ�.

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

               

               printf("�ֻ����� ���� �� %d ������ ���� Ȯ����:%g\n", i, (double)(chance[i] / 1000.0));

        }

        return 0;

}
