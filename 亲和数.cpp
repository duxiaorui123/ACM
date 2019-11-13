//# include <stdio.h>
//int sum(int x)             //求真因数
//{
//	int part_sum = 0;
//	for (int i = 1; i < x; ++i)
//	{
//		if (x % i == 0)
//		{
//			part_sum += i;
//		}
//	}
//	return part_sum;
//}
//int main()
//{
//	int a, b, size, result[100];
//	scanf_s("%d", &size);       //size表示测试几组数据
//
//	for (int i = 0; i < size; ++i)
//	{
//		scanf_s("%d %d", &a, &b);
//		if (a == sum(b) && b == sum(a))
//		{
//			result[i] = 1;
//		}
//		else
//		{
//			result[i] = 0;
//		}
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		if (result[i] == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	
//	return 0;
//}