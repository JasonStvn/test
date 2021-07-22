#include <iostream>
#include <iomanip>
using namespace std;



void ch07_1() //��sizeofȷ�������С
{
	static int a[] = { 1,2,3,4,8,16 };
	cout << "�ڴ��С��" << sizeof(a) << endl;
	cout << "�����ֳ���" << sizeof(int) << endl;
	cout << "Ԫ�ظ���: " << sizeof(a) / sizeof(int) << endl;

}
 
void ch07_2() //쳲���������
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


void ch07_3() // �ַ����鸳ֵ
{
	char charray[10];
	cout << "����9����" << endl;
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

void ch07_4() // һ�������ɶ��һλ���鹹��
{
	int a[3][4];
	cout << " a:" << sizeof(a) / sizeof(int) << endl;
	cout << " a[]:" << sizeof(a[1]) / sizeof(int) << endl;
	cout << "a[][]:" << sizeof(a[1][1]) / sizeof(int) << endl;

}

void ch07_5()//	���ʶ�ά����Ԫ��
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

void ch07_6()// ��ά����Ĵ洢˳��
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

void ch07_7()//  ת�������ά�����Ԫ��
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

void ch07_8()//  ����˷�
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

void ch07_9()// ð������
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
		cout << "=========��Ŀ�б�===========" << endl;
		cout << "��Ŀ1: ��sizeofȷ�������С" << endl;
		cout << "��Ŀ2: 쳲���������" << endl;
		cout << "��Ŀ3: �ַ����鸳ֵ" << endl;
		cout << "��Ŀ4: һ�������ɶ��һλ���鹹��" << endl;
		cout << "��Ŀ5: ���ʶ�ά����Ԫ��" << endl;
		cout << "��Ŀ6: ��ά����Ĵ洢˳��" << endl;
		cout << "��Ŀ7: ת�������ά�����Ԫ��" << endl;
		cout << "��Ŀ8: ����˷�" << endl;
		cout << "��Ŀ9: ð������" << endl;
		cout << "============================" << endl;

		int i = 0;
		while (i<= 0 || i >9)
		{
			cout << "������Ž��ж�Ӧ����";
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
		cout << " ִ����ϰ����������" << endl;
		system("pause");
		system("cls");
	}


}