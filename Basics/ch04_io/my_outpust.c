/*
 *  输出：
 *  puts(): 只能输出字符串，并且输出结束后会自动换行
 *  putchar(): 只能输出单个字符
 *  pirntf(): 可以输出各种类型的数据，是最复杂、灵活、常用的输出函数, 可以代替puts和putchar函数
 *
 */

/*
 *
 * 输入: 
 * scanf(): 和printf类似，scanf可以输入多种类型的数据
 * getchar()、getche()、getch(): 这三个字符都用于输入单个字符
 * gets(): 获取一行数据，并作为字符串处理
 *
 */

# include <stdio.h>

int main()
{
	int a1 = 20, a2 = 345, a3 = 700, a4 = 22;
	int b1 = 56720, b2 = 9999, b3 = 20098, b4 = 2;
	int c1 = 233, c2 = 205, c3 = 1, c4 = 6666;
	int d1 = 34, d2 = 0, d3 = 23, d4 = 23006783;


	printf("%d	%d	%d	%d\n", a1, a2, a3, a4);
	printf("%d	%d	%d	%d\n", b1, b2, b3, b4);
	printf("%d	%d	%d	%d\n", c1, c2, c3, c4);
	printf("%d	%d	%d	%d\n", d1, d2, d3, d4);


	int a = 0, b = 0, c = 0, d = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("a + b = %d\n", a + b);

	scanf("%d %d", &c, &d);
	printf("c * d = %d\n", c*d);

	return 0;
}


