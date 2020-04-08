/*

5. 가변 인수를 사용하는 다음의 함수를 작성하시오.

1) 인수들의 평균을 계산하는 함수 mean
2) 인수들의 중위수를 계산하는 함수 median
3) 인수들을 오름차순으로 정렬하는 함수 ascending_sort
4) 인수로 사용된 여러 개의 문자열을 하나의 문자열로 합치는 함수 concatnate_str

*/

#include <stdio.h>

#include <stdarg.h>

#include <string.h>

 

double mean(int num, ...); //평균

double median(int count, ...); //중위수

void ascending_sort(int *arr, int len); //오름차순

void concatenate_str(int num, ...); //문자열 합치는 함수

 

int main(void)

{
        int i = 0;

        int arr[7] = { 0, };

        int sum = 0;

        for (i = 0; i < 7; i++)

        {

               arr[i] = (7 - i);

        }

        printf("정렬 전:\n");

        for (i = 0; i < 7; i++)

               printf("%d번: %d\n", i, arr[i]);

        ascending_sort(arr, sizeof(arr) / sizeof(int)); //오름차순

        printf("정렬 후:\n");

        for (i = 0; i < 7; i++)

               printf("%d번: %d\n", i, arr[i]);

        printf("중위값:%lf", median(7, 1, 2, 3, 4, 5, 6, 7));

        printf("\n");

        printf("배열에 있는 숫자들의 평균:%f\n", mean(7, 1, 2, 3, 4, 5, 6, 7));

        printf("문자열 'gud', 'eta', 'ma'를 합치면:");

        concatenate_str(3, "gud", "eta", "ma");

        printf("\n");

        return 0;

}

 

double mean(int num, ...)

{

        va_list valist;

        double sum = 0.0;

        int i;

        va_start(valist, num);

 

        for (i = 0; i < num; i++)

        {

               sum += va_arg(valist, int);

        }

 

        va_end(valist);

 

        return sum / num;

}

 

double median(int count, ...)

{

        int arr[100];

        int i = 0;

        int min;

        double median;

 

        va_list ap;

        va_start(ap, count);

 

        while (i < count)

        {

               arr[i] = va_arg(ap, int);

               i++;

        }

 

        ascending_sort(arr, count); //정렬

 

        if (count % 2 == 1)

        {

               median = (double)arr[count / 2];

        }

        else

        {

               median = ((double)(arr[count / 2] + arr[count / 2 - 1]) / (double)2); //홀수일때는 가운데 수 두개를 합쳐서 나눈다

        }

 

        va_end(ap);

        return median;

}

 

 

void ascending_sort(int *arr, int len)

{

        int i,j,min;

        for (i = 0; i < len; i++)

        {

               min = i;

               for (j = i + 1; j < len; j++)

               {

                       if (arr[j] < arr[min])

                       {

                              int temp = arr[min];

                              arr[min] = arr[j];

                              arr[j] = temp;

                       }

               }

        }

}

 

void concatenate_str(int num, ...)

{

        int i = 0;

        char str[100] = "";

        va_list ap;

        va_start(ap, num);

 

        while (i < num)

        {

               strcat(str, va_arg(ap, char*));

               i++;

        }

 

        printf("%s", str);

        va_end(ap);

}
