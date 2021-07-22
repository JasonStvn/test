#include <iostream>
#include <iomanip>
using namespace std;



void ch07_1() //用sizeof确定数组大小
{
	static int a[] = { 1,2,3,4,8,16 };
	cout << "内存大小：" << sizeof(a) << endl;
	cout << "机器字长：" << sizeof(int) << endl;
	cout << "元素个数: " << sizeof(a) / sizeof(int) << endl;

}
 
void ch07_2() //斐波那契数列
{
	int iarray[10];
	iarray[0] = 0;
	iarray[1] = 1;
	for (int i = 2; i < 10; i++)
	{
		iarray[i] = iarray[i - 1] + iarray[i - 2];
		
	}
	for (int i = 0; i < 10; i++)
	{
		cout << iarray[i] << " ";
	}

}


void ch07_3() // 字符数组赋值
{
	char charray[10];
	cout << "输入9个数" << endl;
	for (int i = 0; i < 9; i++)
	{
		cin >> charray[i];
	}
	charray[9] = '\0';
	int i = 0;
	while (charray[i] != '\0')
	{
		cout << charray[i];
		i++;
	}
	cout << endl;
	
}

void ch07_4() // 一个数组由多个一位数组构成
{
	int a[3][4];
	cout << " a:" << sizeof(a) / sizeof(int) << endl;
	cout << " a[]:" << sizeof(a[1]) / sizeof(int) << endl;
	cout << "a[][]:" << sizeof(a[1][1]) / sizeof(int) << endl;

}

void ch07_5()//	访问二维数组元素
{
	int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = i * 10 + j;

		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j];

		}
		cout << endl;
	}

	
}

void ch07_6()// 二维数组的存储顺序
{
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (int i = 0; i < sizeof(a)/sizeof(int)/4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(2) << a[i][j];
			if (j != 3)
			{
				cout << ',';
			}

		}
		cout << endl;
	}
	
	

}

void ch07_7()//  转置输出二维数组的元素
{
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < sizeof(a) / sizeof(int) / 4; i++)
		{
			cout << setw(2) << a[i][j];
			if (i != 2)
			{
				cout << ",";
			}
		}
		
		cout << endl;
	}
}

void ch07_8()//  矩阵乘法
{
	const int arow = 3, acol = 4;
	int a[arow][acol] =
	{
		{5,7,8,2},
		{-2,4,1,1},
		{1,2,3,4}
	};
	const int brow = 4, bcol = 5;
	int b[brow][bcol] =
	{
		{4,-2,3,3,9},
		{4,3,8,-1,2},
		{2,3,5,2,7},
		{1,0,6,3,4}
	};
	const int crow = 3, ccol = 5;
	int c[crow][ccol];
	if (!((acol == brow )&&(crow == arow )&&(ccol == bcol)))
	{
		return;
	}
	for (int i = 0; i < crow; i++)
	{
		for (int j = 0; j < ccol; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < acol; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << setw(5) << c[i][j];
		
		}
		cout << endl;
	}
	
}

void print(int array[], int len)

{
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << ",";
	}
	cout << endl;
}
void bubble(int a[], int size)
{
	int i, temp;
	for (int pass = 1; pass < size; pass++)
	{
		for ( i = 0; i < size - pass; i++)
		{
			if (a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		print(a, size);
	}
}

void ch07_9()// 冒泡排序
{
	int array[] = { 55,2,6,4,32,12,9,73,26,37 };
	int len = sizeof(array) / sizeof(int);
	print(array, len);
	bubble(array, len);
	print(array, len);
	
}

int main()
{
	while (true)
	{
		cout << "=========题目列表===========" << endl;
		cout << "题目1: 用sizeof确定数组大小" << endl;
		cout << "题目2: 斐波那契数列" << endl;
		cout << "题目3: 字符数组赋值" << endl;
		cout << "题目4: 一个数组由多个一位数组构成" << endl;
		cout << "题目5: 访问二维数组元素" << endl;
		cout << "题目6: 二维数组的存储顺序" << endl;
		cout << "题目7: 转置输出二维数组的元素" << endl;
		cout << "题目8: 矩阵乘法" << endl;
		cout << "题目9: 冒泡排序" << endl;
		cout << "============================" << endl;

		int i = 0;
		while (i<= 0 || i >9)
		{
			cout << "输入序号进行对应程序";
			cin >> i;
		}

		switch (i)
		{
		case 1:
			ch07_1();
			break;
		case 2:
			ch07_2();
			break;
		case 3:
			ch07_3();
			break;
		case 4:
			ch07_4();
			break;
		case 5:
			ch07_5();
			break;
		case 6:
			ch07_6();
			break;
		case 7:
			ch07_7();
			break;
		case 8:
			ch07_8();
			break;
		case 9:
			ch07_9();
			break;

		}
		cout << endl;
		cout << "============================" << endl;
		cout << " 执行完毕按任意键清屏" << endl;
		system("pause");
		system("cls");
	}


}