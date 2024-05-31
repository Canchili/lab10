#include <stdio.h>
#include <stdlib.h>
/*
Написать программу вычисления максимального числа из введенных пользователем в
виде одной строки.  Использовать для этого макрос (без функции), на вход
которому подается массив чисел и их количество.
  */
#define max_num(m, n)                                                          \
  ({                                                                           \
    int max = m[0];                                                            \
    for (int i = 1; i < n; ++i) {                                              \
      if (m[i] > max) {                                                        \
        max = m[i];                                                            \
      }                                                                        \
    }                                                                          \
    max;                                                                       \
  })
#define min_num(m, n)\
({\
  int min = m[0];\
  for(int i = 1; i < n; ++i){\
    if(m[i] < min){\
      min = m[i];\
}\
}\
  min;\
})
#define average(m, n)                                                          \
  ({                                                                           \
    int sum = 0;                                                               \
    for (int i = 0; i < n; ++i) {                                              \
      sum += m[i];                                                             \
    }                                                                          \
    (float)sum / n;                                                            \
  })

int main() {
  int numbers[100];
  int n, i;

  printf("Введите количество чисел: ");
  scanf("%d", &n);
  printf("Вводите числа: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("Максимальное число: %d\n", max_num(numbers, n));
  printf("Минимальное число: %d\n", min_num(numbers, n));
  printf("Среднее арифметическое: %.2f\n", average(numbers, n));

  return 0;
}
