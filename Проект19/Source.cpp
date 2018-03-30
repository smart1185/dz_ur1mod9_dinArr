#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  N;
	do
	{
		printf("\t\t----Введите номер задания: ");
		scanf_s("%d", &N);
		cin.get();
		printf("\n");
		switch (N)
		{
		case 1:
			/*1.Дан двумерный массив целых чисел
a.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующего столбца
двумерного массива
b.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующей строки
двумерного массива
*/
		{
			int *a = NULL;
			int *b = NULL;
			int len = 0;
			printf("Введите длину массива: ");
			scanf_s("%d", &len);
			a = (int*)malloc((len * len) * sizeof(int));
			b = (int*)malloc(sizeof(int)*len);
			if (a == NULL || b == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						*(a + i*len + j) = -20 + rand() % 50;
						printf("%d\t", *(a + i*len + j));
					}
					printf("\n");
				}
				int max = 0;
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						//a.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу
						//соответствующего столбца	двумерного массива

						if (abs(*(a + j*len + i)) > max)
							max = abs(*(a + j*len + i));

						//b.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу
						//соответствующей строки	двумерного массива

						//if (abs(*(a + i*len + j)) > max)
						//	max = abs(*(a + i*len + j));
					}
					*(b + i) = max;
					max = 0;
				}
				printf("\n");
				for (int i = 0; i < len; i++)
				{
					printf("%d\n", *(b + i));
				}
			}
		}
		printf("\n");
		break;

		case 2:
			/*2.Дан двумерный массив целых чисел
a.	Сформировать одномерный массив, каждый элемент которого равен первому четному элементу соответствующего столбца
двумерного массива (если такого элемента в столбце нет, то он равен нулю).
b.	Сформировать одномерный массив, каждый элемент которого равен последнему нечетному элементу соответствующей строки
двумерного массива (если такого элемента в строке нет, то он равен нулю).
*/
		{
			int *a = NULL;
			int *b = NULL;
			int len = 0, cnt = 0;
			printf("Введите длину массива: ");
			scanf_s("%d", &len);
			a = (int*)malloc((len * len) * sizeof(int));
			b = (int*)malloc(sizeof(int)*len);
			if (a == NULL || b == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						*(a + i*len + j) = -20 + rand() % 50;
						printf("%d\t", *(a + i*len + j));
					}
					printf("\n");
				}
				int temp;
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						//a.Сформировать одномерный массив, каждый элемент которого равен первому четному элементу
						//соответствующего столбца двумерного массива(если такого элемента в столбце нет, то он равен нулю).

						if (*(a + j*len + i) % 2 == 0)
						{
							temp = *(a + j*len + i);
							cnt++;
							break;
						}
						if (cnt == 0)
							temp = 0;

						//b.Сформировать одномерный массив, каждый элемент которого равен последнему нечетному элементу
						//соответствующей строки двумерного массива(если такого элемента в строке нет, то он равен нулю).

						//if (*(a + i*len + j) % 2 == 0)
						//{
						//	temp = *(a + i*len + j);
						//	cnt++;
						//	break;
						//}
						//if (cnt == 0)
						//	temp = 0;
					}
					*(b + i) = temp;
				}
				printf("\n");
				for (int i = 0; i < len; i++)
				{
					printf("%d\n", *(b + i));
				}
			}
		}
		printf("\n");
		break;

		case 3:
			/*3.Дан двумерный массив.
a.	Сформировать одномерный массив, каждый элемент которого равен количеству элементов соответствующего столбца двумерного
массива, больших данного числа
b.	Сформировать одномерный массив, каждый элемент которого равен сумме элементов соответствующей строки двумерного массива,
меньших данного числа.
*/
		{
			int *a = NULL;
			int *b = NULL;
			int len = 0, cnt = 0, num = 0;
			printf("Введите число: ", num);
			scanf_s("%d", &num);
			printf("\nВведите длину массива: ");
			scanf_s("%d", &len);
			a = (int*)malloc((len * len) * sizeof(int));
			b = (int*)malloc(sizeof(int)*len);
			if (a == NULL || b == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						*(a + i*len + j) = -20 + rand() % 50;
						printf("%d\t", *(a + i*len + j));
					}
					printf("\n");
				}
				int temp;
				for (int i = 0; i < len; i++)
				{
					for (int j = 0; j < len; j++)
					{
						//a.Сформировать одномерный массив, каждый элемент которого равен количеству элементов
						//соответствующего столбца двумерного массива, больших данного числа

						if (*(a + j*len + i) > num)
						{
							cnt++;
							temp = cnt;
						}
						//b.Сформировать одномерный массив, каждый элемент которого равен сумме элементов соответствующей
						//строки двумерного массива, меньших данного числа.

						//if (*(a + i*len + j) < num)
						//{
						//	cnt++;			
						//  temp=cnt;
						//}						
					}
					*(b + i) = temp;
					cnt = 0;
				}
				printf("\n");
				for (int i = 0; i < len; i++)
				{
					printf("%d\n", *(b + i));
				}
			}
		}
		printf("\n");
		break;

		case 4:
			/*4.Дан двумерный массив размером N x M, заполненный целыми числами
a.	Все его элементы, кратные трем, записать в одномерный массив.
b.	Все его положительные элементы записать в один одномерный массив, а остальные — в другой
*/
		{
			int *a = NULL;
			int *b = NULL;
			int *c = NULL;
			int  n, m;
			printf("Введите размеры массива: ");
			scanf_s("%d %d", &n, &m);
			a = (int*)malloc((n * m) * sizeof(int));
			b = (int*)malloc(sizeof(int) * 100);
			c = (int*)malloc(sizeof(int) * 100);
			if (a == NULL || b == NULL || c == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						*(a + i*n + j) = -20 + rand() % 50;
						printf("%d\t", *(a + i*n + j));
					}
					printf("\n");
				}
				printf("\nA: Массив с элементами матрицы, кратными 3-м:\n");
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						//a.Все его элементы, кратные трем, записать в одномерный массив.

						if (*(a + i*n + j) % 3 == 0)
						{
							*(b + i) = *(a + i*n + j);
							printf("%d  ", *(b + i));
						}
					}
				}
				//b.Все его положительные элементы записать в один одномерный массив, а остальные — в другой

				printf("\n");
				printf("\nB: Массив с положительными элементами матрицы:\n");
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						if (*(a + i*n + j) > 0)
						{
							*(b + i) = *(a + i*n + j);
							printf("%d  ", *(b + i));
						}
						else
						{
							*(c + i) = *(a + i*n + j);
						}
					}
				}
				printf("\nМассив с остальными элементами матрицы:\n");
				for (int i = 0; i < sizeof(c); i++)
				{
					printf("%d  ", *(c + i));
				}
				printf("\n%d", sizeof(c));
			}
		}
		printf("\n");
		break;

		case 5:
			/*5.Ввести целые числа. Создать из них массив. Вычислить сумму чётных элементов массива*/
		{
			int *a = NULL;
			int num, dig, sum = 0;
			printf("Сколько чисел вводить? ");
			scanf_s("%d", &num);
			a = (int*)malloc(sizeof(int)*num);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Введите числа: \n");
				for (int i = 0; i < num; i++)
				{
					scanf_s("%d", &dig);
					*(a + i) = dig;
				}
				printf("\nМассив из введенных чисел:\n\n");
				for (int i = 0; i < num; i++)
				{
					printf("[%d] %d  ", i, *(a + i));
					if (*(a + i) % 2 == 0)
						sum += *(a + i);
				}
				printf("\n\nСумма чётных элементов массива: %d\n", sum);
			}
		}
		printf("\n");
		break;

		case 6:
			/*6.Ввести целое число N и массив из N вещественных чисел. Определить количество отрицательных элементов массива*/
		{
			int *a = NULL;
			int n, cnt = 0;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (int*)malloc(sizeof(int)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = -20 + rand() % 50;
					printf("%d  ", *(a + i));
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) < 0)
						cnt++;
				}
				printf("\n\n Количество отрицательных элементов массива = %d\n", cnt);
			}
		}
		printf("\n");
		break;


		case 7:
			/*7.Ввести целое число N. Создать массив из N вещественных чисел. Вычислить произведение элементов,
			модуль которых меньше 7.*/
		{
			int *a = NULL;
			int n, mult = 1;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (int*)malloc(sizeof(int)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = -20 + rand() % 50;
					printf("%d  ", *(a + i));
				}
				for (int i = 0; i < n; i++)
				{
					if (abs(*(a + i)) < 7)
					{
						mult *= *(a + i);
					}
				}
				printf("\n\n Произведение элементов, модуль которых меньше 7 = %d\n", mult);
			}
		}
		printf("\n");
		break;

		case 8:
			/*8.Ввести вещественные числа. Создать из них массив определить наибольший элемент массива*/
		{
			double *a = NULL, dig, max = 0;
			int num;
			printf("Сколько чисел вводить? ");
			scanf_s("%d", &num);
			a = (double*)calloc(num, sizeof(double));
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Введите числа: \n");
				for (int i = 0; i < num; i++)
				{
					scanf_s("%lf", &dig);
					*(a + i) = dig;
				}
				printf("\nМассив из введенных чисел:\n\n");
				for (int i = 0; i < num; i++)
				{
					printf("[%d] %2.1f  ", i, *(a + i));
					if (*(a + i) > max)
						max = *(a + i);
				}
				printf("\n\nНаибольший элементов массива: %2.1f\n", max);
			}
		}
		printf("\n");
		break;

		case 9:
			/*9.Ввести целое число N и массив из N целых чисел. Определить наименьший элемент массива*/
		{
			int *a = NULL;
			int n, min = 0;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (int*)malloc(sizeof(int)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = 20 - rand() % 50;
					printf("%d  ", *(a + i));
					min = *(a + i);
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) < min)
					{
						min = *(a + i);
					}
				}
				printf("\n\n Наименьший элемент массива = %d\n", min);
			}
		}
		printf("\n");
		break;

		case 10:
			/*10.Ввести вещественные числа. Создать из них массив. Определить среднее арифметическое элементов массива.*/
		{
			double *a = NULL, dig, sum = 0;
			int num;
			printf("Сколько чисел вводить? ");
			scanf_s("%d", &num);
			a = (double*)calloc(num, sizeof(double));
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Введите числа: \n");
				for (int i = 0; i < num; i++)
				{
					scanf_s("%lf", &dig);
					*(a + i) = dig;
				}
				printf("\nМассив из введенных чисел:\n\n");
				for (int i = 0; i < num; i++)
				{
					printf("[%d] %2.1f  ", i, *(a + i));
					sum += *(a + i);
				}
				printf("\n\nСреднее арифметическое элементов массива = %2.1f\n", sum / num);
			}
		}
		printf("\n");
		break;

		case 11:
			/*11.Ввести вещественные числа. Создать из них массив. Определить количество неотрицательных элементов массива*/
		{
			double *a = NULL, dig;
			int num, cnt = 0;
			printf("Сколько чисел вводить? ");
			scanf_s("%d", &num);
			a = (double*)calloc(num, sizeof(double));
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Введите числа: \n");
				for (int i = 0; i < num; i++)
				{
					scanf_s("%lf", &dig);
					*(a + i) = dig;
				}
				printf("\nМассив из введенных чисел:\n\n");
				for (int i = 0; i < num; i++)
				{
					printf("[%d] %2.1f  ", i, *(a + i));
					if (*(a + i) >= 0)
						cnt++;
				}
				printf("\n\nКоличество неотрицательных элементов массива: %d\n", cnt);
			}
		}

		printf("\n");
		break;

		case 12:
			/*12.Ввести целое число N и массив из N вещественных чисел. Определить индекс последнего отрицательного элемента массива*/
		{
			double *a = NULL;
			int n, index = 0;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (double*)malloc(sizeof(double)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = 2 - rand() % 30 * 0.22;
					printf("[%d]%2.2f  ", i, *(a + i));
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) < 0)
					{
						index = i;
					}
				}
				printf("\n\nИндекс последнего отрицательного элемента массива --- %d\n", index);
			}
		}
		printf("\n");
		break;

		case 13:
			/*13.Ввести целое число N. Создать массив из N вещественных чисел. Вычислить сумму минимального и
			максимального элементов.*/
		{
			double *a = NULL, min, max = 0;
			int n;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (double*)malloc(sizeof(double)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = 2 - rand() % 30 * 0.22;
					printf("[%d]%2.2f  ", i, *(a + i));
					min = *(a + i);
					if (*(a + i) > max)
						max = *(a + i);
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) < min)
					{
						min = *(a + i);
					}
				}
				printf("\n\nСумма минимального и максимального элементов:  %2.2f + %2.2f = %2.2f", min, max, min + max);
			}
		}
		printf("\n");
		break;

		case 14:
			/*14.Ввести вещественные числа. Создать из них массив. Вычислить произведение минимального и максимального элементов.*/
		{
			double *a = NULL, min, max = 0;
			int n;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (double*)malloc(sizeof(double)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = 2 - rand() % 30 * 0.22;
					printf("[%d]%2.2f  ", i, *(a + i));
					min = *(a + i);
					if (*(a + i) > max)
						max = *(a + i);
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) < min)
					{
						min = *(a + i);
					}
				}
				printf("\n\nПроизведение минимального и максимального элементов:  %2.2f + %2.2f = %2.2f", min, max, min * max);
			}
		}
		printf("\n");
		break;

		case 15:
			/*15.Ввести целое число N и массив из N целых чисел. Определить, есть ли в массиве число 20.*/
		{
			int *a = NULL;
			int n, cnt = 0;
			printf("Введите N:");
			scanf_s("%d", &n);
			a = (int*)malloc(sizeof(int)*n);
			if (a == NULL)
			{
				printf("Память не выделена");
			}
			else
			{
				printf("Можете продолжать: \n");
				printf("Массив:\n");
				for (int i = 0; i < n; i++)
				{
					*(a + i) = rand() % 99;
					printf("%d  ", *(a + i));
				}
				for (int i = 0; i < n; i++)
				{
					if (*(a + i) == 20)
					{
						cnt++;
					}
				}
				if (cnt != 0)
					printf("\n\n Число 20 есть в массиве (встречается %d раз)\n", cnt);
				else printf("\n\n Число 20 не встречается в массиве\n");

			}
		}
		printf("\n");
		break;

		default: {printf("Задания с таким номером не существует\n"); }
		}
	} while (N > 0 && N < 16);
	printf("\t\t\t\t\tКОНЕЦ.\n");
	system("pause");
}
