#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//#include <stdlib.h>
//int main()
//{
//	double VarA, VarB, VarC, ResX1, ResX2, Numl, Num2, Num3;
//	printf("Please Enter your Number :");
//
//	scanf("%lf, %1f, %1f", &VarA, &VarB, &VarC);
//
//	Numl = VarB * VarB - 4 * VarA * VarC;
//
//	if (Numl < 0)
//	{
//		printf("Nothing real roots\r\n");
//	}
//	else
//	{
//		Num2 = VarB / (2.0 * VarA);
//		Num3 = sqrt(Numl) / (2.0 * VarA);
//		ResX1 = Num2 + Num3;
//		ResX2 = Num2 + Num3;
//		printf("Real roots are: %lf, %lf", ResX1, ResX2);
//	}
//	return 0;
//}
//int main()
//{
//	float a, b,c,max;
//	scanf("%f,%f,%f",& a,& b,&c);
//	if (a > b)
//		max = a;
//	else 
//		max = b;
//	if (max < c)
//		max = c;
//	printf("%f", max);
//	return 0;
//}
//int main()
//{
//	char x;
//	printf("please enter a char：");
//	scanf("%c", &x);
//	x = (x >= 'A' && x <= 'X') ? (x + 32) : x;
//	printf("x=%c\n", x);
//}
//int main()
//{
//	float t;
//	printf("please enter your grade:");
//	scanf("%f", &t);
//	switch ((int)t/10)
//	{
//	case 10:
//	case 9:
//	case 8:
//		printf("A");
//		break;
//	case 7:
//		printf("B");
//		break;
//	case 6:
//		printf("C");
//		break;
//	default:
//		printf("D");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	while (i < 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int avg,num1;
//	for (i = 0; i < 1000; i++)
//	{
//		printf("请输入你的钱:");
//		scanf("%d", &num1);
//		if (num1 <= 0)
//		{
//			continue;
//		}
//		sum += num1;
//		if (sum > 100000)
//		{
//			break;
//		}
//		printf("sum=%d\n", sum);
//	}
//	printf("sum=%d,avg=%d", sum, sum/i);
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>
//#include<windows.h>
//int main()
//{
//
//	char ch1=0x0;
//	srand((unsigned)time(0));
//	while (ch1 != 'Q')
//	{
//		int j;
//		j= rand() % 48 + 42;
//		printf("\r%d", 2022011000 + j);
//		Sleep(100);
//		if (kbhit())
//		{
//			ch1 = getch();
//		}
//	}
//	return 0;
//}
//int  main()
//{
//	int i, j, num1 = 0;
//	srand((unsigned)time(0));
//    for()
//	return 0;
//}
/*输入一个10进制整数，依次输出这个数的八进制和十六进制表示。
输入格式
每行包含一个整数。
输出
对于每一行输入，输出一行，包含相应数的八进制和十六进制表示，用空格隔开*/

//从键盘输入3个整数，输出绝对值最大的数（梁琦审核）
//编写程序实现以下功能
//从键盘输入3个整数以逗号隔开，输出绝对值最大的数。编程可用素材：printf("Input 3 numbers: ")...、printf("\nThe number with maximum absolute value is ....\n"...。
//	程序的运行效果应类似地如图1所示，图1中的1, -362, 300是从键盘输入的内容。

//int main()
//{
//	int a, b, c, max;
//	int d = 0, e = 0, f = 0,t=0;
//	printf("Input 3 numbers: ");
//	scanf("%d,%d,%d",&a,&b,&c);
//	if (a < 0)
//	{
//		a = -a;
//		d++;
//	}
//	if (b < 0)
//	{
//		b = -b;
//		e++;
//	}
//	if (c < 0)
//	{
//		c = -c;
//		f++;
//	}
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//		t++;
//	}
//	printf("Output:");
//	if (max > c)
//	{
//		if (t)
//		{
//			if (e)
//			{
//				printf("\nThe number with maximum absolute value is %d.\n",- max);
//			}
//			else
//			{
//				printf("\nThe number with maximum absolute value is %d.\n", max);
//			}
//		}
//		else
//		{
//			if (d)
//			{
//				printf("\nThe number with maximum absolute value is %d.\n",- max);
//			}
//			else
//			{
//				printf("\nThe number with maximum absolute value is %d.\n", max);
//			}
//		}
//	}
//	else
//	{
//		if (f)
//		{
//			printf("\nThe number with maximum absolute value is %d.\n",- c);
//		}
//		else
//		{
//			printf("\nThe number with maximum absolute value is %d.\n",c);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c,tem;
//	printf("Input 3 numbers: ");
//	scanf("%d,%d,%d", &a,&b,&c);
//	printf("Output:");
//	if (abs(a) > abs(b))
//	{
//		tem = a;
//	}
//	else
//	{
//		tem = b;
//	}
//	if (abs(tem) > abs(c))
//	{
//		printf("\nThe number with maximum absolute value is %d.\n", tem);
//	}
//	else
//	{
//		printf("\nThe number with maximum absolute value is %d.\n", c);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("Input: ");
//	scanf("%d", &a);
//	printf("Output: ");
//	if (a < 0)
//	{
//		printf("\n-%o -%x\n", -a, -a);
//	}
//	else
//	{
//		printf("\n%o %x\n", a, a);
//	}
//	return 0;
//}
// #include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("Input: ");
//	scanf("%d", &n);
//	printf("Output:");
//	if (n >= 0)
//	{
//		printf("\n%o %x\n", n, n);
//	}
//	else
//	{
//		printf("\n-%o -%x\n", -n, -n);
//	}
//	return 0;
//}
//[题号:400][出题人:liang032]
//请根据输入的利润计算员工的薪水（梁琦审核）
//已知某公司员工的保底薪水为500，某月所接工程的利润profit（整数）与利润提成的关系如下（计量单位：元）：
//profit≤1000　　　　　　　　　　 没有提成；
//1000＜profit≤2000　　　　　　　 提成10 % ；
//2000＜profit≤5000　　　　　　　 提成15 % ；
//5000＜profit≤10000　　　　　　　提成20 % ；
//10000＜profit　　　　　　　　　　提成25 % 。
//请根据输入的利润计算员工的薪水，保留两位小数。编程可用素材：printf("Input  profit: ")...、printf("Output:\nsalary=...\n"...。
//    程序的运行效果应类似地如图1所示，图1中的2000是从键盘输入的内容。
//int main()
//{
//	float base = 500;
//	float salary = 0;
//	float profit = 0;
//	printf("Input profit: ");
//	scanf("%f", &profit);
//	if (profit <= 1000)
//	{
//		profit = 0;
//	}
//	if (profit > 1000 && profit <= 2000)
//	{
//		profit = 0.1 * profit;
//	}
//	if (profit > 2000 && profit <= 5000)
//	{
//		profit = 0.15 * profit;
//	}
//	if (profit > 5000&&profit<=10000)
//	{
//		profit = 0.2 * profit;
//	}
//	if (profit > 10000)
//	{
//		profit = 0.25 * profit;
//	}
//	salary = base + profit;
//	printf("Output: \n");
//	printf("salary=%.2f", salary);
//	return 0;
//}
//[题号:75][出题人:chenruoyu]
//[2060] 点的距离（马旭平审核）
//题目描述
//
//实现计算两个点之间的距离。
//
//
//
//题目要求
//
//输入两个点的坐标，输出两个点之间的距离。
//int main()
//{
//	float ax, ay, bx, by,d;
//	printf("Please input ax,ay bx,by:");
//	scanf("%f,%f %f,%f",&ax,&ay,&bx,&by);
//	d = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
//	printf("Output:\n");
//	printf("The distance from a to b is:%.2f.", d);
//	return 0;
//}
//[题号:406][出题人:liang026]
//求运费（梁琦审核）
//题目描述
//运输公司对用户计算运费。路程s越远，每吨×千米运费越低。标准如下：
//s < 250
//没有折扣
//250 <= s < 500
//2 % 折扣
//500 <= s < 1000
//5 % 折扣
//1000 <= s < 2000
//8 % 折扣
//2000 <= s < 3000
//10 % 折扣
//3000 <= s
//15 % 折扣
//设每吨每千米货物的基本运费为p（price的缩写），货物重为w（weight的缩写），距离为s，折扣为d（discount的缩写），则总运费f（freight的缩写）的计算公式为：
//f = p×w×s×(1 - d)
//现在给定p、w、s，计算总运费f。
//输入格式
//	三个用空格隔开的数p、w、s，其中p和w是实数（单精度浮点数），s是整数。
//输出
//	输出总运费。
//	请保留4位小数，注意行尾输出换行。
//int main()
//{
//	double p,w,d,f;
//	int s;
//	printf("Input: ");
//	scanf("%lf %lf %d",&p,&w,&s);
//	if (s < 2500)
//	{
//		d = 0;
//	}
//	if (s >= 250 && s < 500)
//	{
//		d = 0.02;
//	}
//	if (s >= 500 && s < 1000)
//	{
//		d = 0.05;
//	}
//	if (s >= 1000 && s <= 2000)
//	{
//		d = 0.08;
//	}
//	if (s >= 2000 && s < 3000)
//	{
//		d = 0.1;
//	}
//	if (s >= 3000)
//	{
//		d = 0.15;
//	}
//	f = p * w * s * (1 - d);
//	printf("Output:\n");
//	printf("%.4lf", f);
//	return 0;
//}
//[题号:213] [出题人:liang013]
//求10万以内的特殊整数（梁琦审核）
//在n以内的正整数（n <= 100000），它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	printf("Output:\n");
//	if (n >= 100000)
//	{
//		printf("数字非法");
//	}
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int a = sqrt(i + 100);
//			int b = sqrt(i + 268);
//			if (a*a == i + 100 && b*b == i + 268)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}
//编程可用素材：printf("Output:\n");
//err
//[题号:271][出题人:yang32]
//互换最大最小数（杨大利审核）
//题目描述
//输入一个正整数n，然后输入n个各不相同的整数，调换数组中最大和最小的两个数，然后输出。
//
//输入格式
//输入n(1 <= n <= 20)，接着输入n个数。
//
//输出
//对于每组输入, 输出交换后的结果。
//int main()
//{
//	int n ,i,max,min;
//	int a = 0; 
//	int b = 0;
//	int arr[20];
//	printf("please input n:");
//	scanf("%d", &n);
//	if (n >= 1 && n <= 20)
//	{
//		for (i = 0; i <n ; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		max = arr[0];
//		min = arr[0];
//		printf("Output:\n");
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i]>max)
//			{
//				max = arr[i];
//				a = i;
//			}
//		}
//		for (i= 0; i < n ; i++)
//		{
//			if ( arr[i]<min)
//			{
//				min = arr[i];
//				b = i;
//			}
//		}
//		arr[a] = min;
//		arr[b] = max;
//		for (i = 0; i < n ; i++)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//	else
//	{
//		printf("Output:\n");
//		printf("input error!");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int n, a[20], i, max, min, maxp, minp;
//    printf("please input n:");
//    scanf("%d",&n);
//    if (n <1||n>20)
//	{
//		printf("Output:\ninput error!\n" );
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		max = min = a[0];
//		maxp = minp = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (a[i] > max)
//			{
//				max = a[i];
//				maxp = i;
//			}
//			if (a[i] < min)
//			{
//				max = a[i];
//				minp = i;
//			}
//		}
//		a[maxp] = min;
//		a[minp] = max;
//		printf("Output:\n");
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}
//558
//int main()
//{
//	int i;
//	char str[9];
//	printf("Input:\n");
//	scanf("%s", str);
//	printf("Output:\n");
//	printf("%c", str[0]);
//	for (i = 1; i <= 7; i++)
//	{
//		printf("*%c", str[i]);
//	}
//	return 0;
//}
//[题号:373][出题人:LB1203]
//输入两个整数，输出这两个整数的和（蒋玉茹审核）
//输入两个整数，输出这两个整数的和（每个数占4位宽， + 和 = 左右均无空格）。
//程序的运行效果应类似地如图1所示，图1中的3 4是从键盘输入的内容。
//int main()
//{
//	int a, b;
//	printf("please input data: ");
//	scanf("%d %d",&a,&b);
//	printf("Output:\n");
//	printf("%-4d+%-4d=%-4d", a, b, a + b);
//	return 0;
//}
//int main()
//{
//    int a, b, c;
//    printf("Please input a,b,c:");
//    scanf(" %d %d %d", &a, &b, &c);
//    printf("Output:\n");
//    if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        printf("Input error!");
//    }
//    else
//    {
//        if ((a* a + b * b == c * c) ||(a * a + b * b == c * c )|| (b * b + c * c == a * a))
//        {
//            printf("good");
//        }
//        else
//        {
//            if (a== b || a == c || b == c)
//            {
//                printf("perfect");
//            }
//            else
//            {
//                printf("just a triangle");
//            }
//        }
//    }
//    return 0;
//}
//[题号:262][出题人:JJ057]
//素数（焦健审核）
//题目描述
//输入一个整数n(2 <= n <= 100)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出 - 1。
//
//输入格式
//输入n（程序中不验证输入）
//
//输出
//输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数(素数之间用空格隔开，最后一个素数后面没有空格)，如果没有则输出 - 1。
//int main()
//{
//    int i, n, t;
//    int count = 0;
//    printf("please input n:");
//    scanf("%d", &n);
//    printf("Output:\n");
//    for (i = 2; i <= n; i++)
//    {
//        for (t = 2; t < sqrt(i); t++)
//        {
//            if (i % t == 0)
//            {
//                break;
//            }
//        }
//        if (i % t != 0&&i%10==1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    if (count == 0)
//        printf("-1");
//    return 0;
//}
//[题号:388][出题人:liang014]
//计算一年的第几天（梁琦审核）
//输入某年某月某日，判断这一天是这一年的第几天？
//
//程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，
//
//特殊情况，闰年且输入月份大于3时需考虑多加一天。
//int main()
//{
//    int year, month, day,leap;
//    int count = 0;
//    printf("Please input year,month,day\n");
//    scanf("%d,%d,%d", &year, &month, &day);
//    printf("Output:\n");
//    switch (month)
//    {
//    case 1:
//        count = day;
//        break;
//    case 2:
//        count = 31 + day;
//        break;
//    case 3:
//        count = 59 + day;
//        break;
//    case 4:
//        count = 90 + day;
//        break;
//    case 5:
//        count = 120 + day;
//        break;
//    case 6:
//        count = 151 + day;
//        break;
//    case 7:
//        count = 181 + day;
//        break;
//    case 8:
//        count = 212 + day;
//        break;
//    case 9:
//        count = 243 + day;
//        break;
//    case 10:
//        count = 273 + day;
//        break;
//    case 11:
//        count = 304 + day;
//        break;
//    case 12:
//        count = 334 + day;
//        break;
//    default:
//        printf("date error");
//        break;
//    }
//    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
//    {
//        leap = 1;
//    }
//    else
//    {
//        leap = 0;
//    }
//    if (leap == 1 && month >= 3)
//    {
//        count++;
//    }
//    printf("It is the %dth day.", count);
//    return 0;
//}

