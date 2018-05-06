//任意输入一串字符，统计字符串里大写字母、小写字母与数字的个数
/*
思路:
将输入的字符串存储到字符组中，让后对该数组的所有元素遍历，通过比较每个字符的ASCII码值所在的区间，来对大写字母、小写字母、数字计数
大写字母[65,90]		['A','Z']
小写字母[97,122]	['a','z']
数字	[48,57]		['0','9']
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i = 0;
	int A = 0, a = 0, n = 0;
	gets(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')A++;
		if (str[i] >= 'a'&&str[i] <= 'z')a++;
		if (str[i] >= '1'&&str[i] <= '9')n++;
		i++;
	}
	printf("大写字母个数:\t%d\n", A);
	printf("小写字母个数:\t%d\n", a);
	printf("数字个数:\t%d\n", n);
	while (1);
	return 0;
}