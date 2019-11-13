//# include <stdio.h>
//
//int main()
//{
//	int a, b;
//	while (scanf_s("%d%d", &a, &b)!=EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//# include <stdio.h>

//int main()
//{
//	int a, b;
//	int input;
//	input = scanf_s("%d %d", &a, &b);
//	printf("%d", input);
//
//	return 0;
//}

# include <stdio.h>

//int main()
//{
//	int size, a, b, result[100];
//	scanf_s("%d", &size);
//	for (int i = 0; i < size; ++i)
//	{
//		scanf_s("%d %d", &a, &b);
//		result[i] = a + b;
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d\n", result[i]);
//	}
//	return 0;
//}

# include <stdio.h>

//int main()
//{
//	int a, b;
//	while (scanf_s("%d %d", &a, &b) != EOF)
//	{
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("%d\n", a + b);
//		}
//	}
//	return 0;
//}

# include <stdio.h>

//int main()
//{
//	int a, b;
//	while (1)
//	{
//		scanf_s("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//# include <stdio.h>
//
//int main()
//{
//	int a, i, n, sum;
//	while (1)
//	{
//		sum = 0;
//		scanf_s("%d", &n);
//		if (n != 0)
//		{
//			for (i = n; i > 0; --i)
//			{
//				scanf_s("%d", &a);
//				sum += a;
//			}
//			printf("%d\n", sum);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

//# include <stdio.h>
//
//int main()
//{
//	int size, result[100], n, a, i, sum;
//	scanf_s("%d", &size);
//	for (int j = 0; j < size; ++j)
//	{
//		sum = 0;
//		scanf_s("%d", &n);
//		if (n != 0)
//		{
//			for (i = n; i > 0; --i)
//			{
//				scanf_s("%d", &a);
//				sum += a;
//			}
//			printf("%d\n", sum);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

//# include <stdio.h>
//
//int main()
//{
//	int n, a,sum, i ;
//	scanf_s("%d", &n);
//	while (1)
//	{
//		sum = 0;
//		if (n != 0)
//		{
//			for (i = n; i > 0; --i)
//			{
//				scanf_s("%d", &a);
//				sum += a;
//			}
//			printf("%d\n", sum);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int N, temp, sum;
	while (~scanf_s("%d", &N))
	{
		sum = 0;
		while (N--)
		{
			scanf_s("%d", &temp);
			sum += temp;
		}
		printf("%d\n", sum);
	}
	return 0;
}