#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//算数操作符内 + - * / %
//这里面除了%以外，其他的都既可以是整数也可以是浮点数，只有%的两边必须都是整形

//移位操作符(移动的是二进制位)
//   >>     <<
//  >>
//右移操作符（分为两种）（有除二的效果）
//1.算数右移----右边丢弃，左边补原符号位 （计算机采用的是算数移位）
//2.逻辑右移----右边遗弃，左边补0
//左移操作符--左边丢弃，右边补0（有乘2的效果）
//对于移动操作位不要写移动负数位

//按位&（二进制）
//按位|
//按位异或^
//加减法

//int mian()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before: a = %d  b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after: a = %d  b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b; //8
//	b = a - b; //3
//	a = a - b;// 5
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//异或的方法
//(首先的a^b相当于得到了一个密码，然后你用a和这个密码异或就会得到b的数值，你用b和这个密码异或能得到a的数值)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数（统计num的补码中有几个1）
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}
//	printf("%d ", count);
//}
//但是你会发现当你输入的值是-1的时候他的补码本应该是32个1，但是结果显示是0，这里就报错了

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (num >> i) & 1)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}



//这里还有一种更加NB的思想方式
//13
//1101 n
//1100 n-1
//------------
//1100 n
//1011 n-1
//------------
//1000 n
//0111 n-1
//-----------
//0000
//每&一次就会消除掉最右边的一个1
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}




//int Fac(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	count = Fac(n);
//	printf("count = %d ", count);
//	return 0;
//}



//表达式求值：表达式求值的顺序一部分是由操作符的优先级和结合性决定的，同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型















































//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//
//输入例子 :
//
//1999 2299
//
//输出例子 : 7
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	ret = m^n;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//
//}

//用函数封装来实现
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	return count_bit_one(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = 0;
//	count = get_diff_bit(m, n);
//	printf("count = %d", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void Print(int m)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((m >> i) & 1));
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((m >> i) & 1));
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Print(m);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2+22+222+2222+22222
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

#include<math.h>
//求出0～100000之间的所有“水仙花数”并输出。也叫自幂数
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i的位数  n
//		int n = 1;  //一个数至少是一位数，所以这里初始化为1
//		//但是这里你会发现如果使用i，那么就会在while里面改变循环变量i的值，需要重新定义一个临时变量，来暂时保管这个i的数值
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算每一位的n次方之和  sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n); //平方和的函数   pow得到的数是一个double类型，但是你赋给了一个整形的上面，所以为了避免警告可以强制转换类型
//			tmp /= 10;
//		}
//		//比较i和sum的值是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//对于一个菱形来说，必须打印的是奇数行才行，不然根本就不可能打印出来菱形
//所以为了避免输入一个偶数行，我们就直接把这个菱形拆分成为了两个部分，先打印上边部分，然后在打印下半部分
int main()
{
	int line = 0;
	scanf("%d", &line); // 7
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <line-1-i; j++)  // 6 5 4 3 2 1 0 每一行的空格数都是在减少的
		{
			printf(" ");
		}
		//打印'*'
		for (j = 0; j < 2*i+1; j++)  // '*' 是
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印'*'
		for (j = 0; j <2*(line-1-i)-1 ; j++)  // 下半部分的第一行是11个，第二行是9个
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}