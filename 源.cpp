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
//	printf("please enter a char��");
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
//		printf("���������Ǯ:");
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
/*����һ��10�����������������������İ˽��ƺ�ʮ�����Ʊ�ʾ��
�����ʽ
ÿ�а���һ��������
���
����ÿһ�����룬���һ�У�������Ӧ���İ˽��ƺ�ʮ�����Ʊ�ʾ���ÿո����*/

//�Ӽ�������3���������������ֵ��������������ˣ�
//��д����ʵ�����¹���
//�Ӽ�������3�������Զ��Ÿ������������ֵ����������̿����زģ�printf("Input 3 numbers: ")...��printf("\nThe number with maximum absolute value is ....\n"...��
//	���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�1, -362, 300�ǴӼ�����������ݡ�

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
//[���:400][������:liang032]
//�����������������Ա����нˮ��������ˣ�
//��֪ĳ��˾Ա���ı���нˮΪ500��ĳ�����ӹ��̵�����profit����������������ɵĹ�ϵ���£�������λ��Ԫ����
//profit��1000�������������������� û����ɣ�
//1000��profit��2000�������������� ���10 % ��
//2000��profit��5000�������������� ���15 % ��
//5000��profit��10000�����������������20 % ��
//10000��profit�����������������������25 % ��
//�����������������Ա����нˮ��������λС������̿����زģ�printf("Input  profit: ")...��printf("Output:\nsalary=...\n"...��
//    ���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�2000�ǴӼ�����������ݡ�
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
//[���:75][������:chenruoyu]
//[2060] ��ľ��루����ƽ��ˣ�
//��Ŀ����
//
//ʵ�ּ���������֮��ľ��롣
//
//
//
//��ĿҪ��
//
//��������������꣬���������֮��ľ��롣
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
//[���:406][������:liang026]
//���˷ѣ�������ˣ�
//��Ŀ����
//���乫˾���û������˷ѡ�·��sԽԶ��ÿ�֡�ǧ���˷�Խ�͡���׼���£�
//s < 250
//û���ۿ�
//250 <= s < 500
//2 % �ۿ�
//500 <= s < 1000
//5 % �ۿ�
//1000 <= s < 2000
//8 % �ۿ�
//2000 <= s < 3000
//10 % �ۿ�
//3000 <= s
//15 % �ۿ�
//��ÿ��ÿǧ�׻���Ļ����˷�Ϊp��price����д����������Ϊw��weight����д��������Ϊs���ۿ�Ϊd��discount����д���������˷�f��freight����д���ļ��㹫ʽΪ��
//f = p��w��s��(1 - d)
//���ڸ���p��w��s���������˷�f��
//�����ʽ
//	�����ÿո��������p��w��s������p��w��ʵ���������ȸ���������s��������
//���
//	������˷ѡ�
//	�뱣��4λС����ע����β������С�
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
//[���:213] [������:liang013]
//��10�����ڵ�����������������ˣ�
//��n���ڵ���������n <= 100000����������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	printf("Output:\n");
//	if (n >= 100000)
//	{
//		printf("���ַǷ�");
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
//��̿����زģ�printf("Output:\n");
//err
//[���:271][������:yang32]
//���������С�����������ˣ�
//��Ŀ����
//����һ��������n��Ȼ������n��������ͬ������������������������С����������Ȼ�������
//
//�����ʽ
//����n(1 <= n <= 20)����������n������
//
//���
//����ÿ������, ���������Ľ����
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
//[���:373][������:LB1203]
//����������������������������ĺͣ���������ˣ�
//����������������������������ĺͣ�ÿ����ռ4λ�� + �� = ���Ҿ��޿ո񣩡�
//���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�3 4�ǴӼ�����������ݡ�
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
//[���:262][������:JJ057]
//������������ˣ�
//��Ŀ����
//����һ������n(2 <= n <= 100)��Ҫ��������д�1���������֮��(������1���������)��λΪ1�����������û������� - 1��
//
//�����ʽ
//����n�������в���֤���룩
//
//���
//������д�1���������֮��(������1���������)��λΪ1������(����֮���ÿո���������һ����������û�пո�)�����û������� - 1��
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
//[���:388][������:liang014]
//����һ��ĵڼ��죨������ˣ�
//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//
//�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬
//
//��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
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

