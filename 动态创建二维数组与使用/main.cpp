#include<iostream>

using namespace std;
void print(int **x, int a, int b)
{


	cout << x[a][b];
}
int main()
{

	cout << "------------------����һ�����������ʹ�ö�̬��ά�����ʵ��----------------------" << endl;
	//x��һ����ά��int����(x��һ��ָ��ָ���ָ�룩
	int** x;
	//�����û����������ֵ
	int row, col;
	cout << "���������������" << endl;
	cin >> row;
	cout << "���������������" << endl;
	cin >> col;
	//������ָ��
	x = new int*[row];//���ڴ��з���һ�������������һrow��С�����飬
					  //�����д�ŵ�����Ϊint*(ָ��int��ָ��)
					  //Ϊÿһ�з���ռ�
	for (int i = 0; i<row; i++)
	{
		x[i] = new int[col];
		//�ղŴ�����ָ�����飬����i=0��Ҳ����ָ�������еĵ�һ��ָ��ָ���
		//����Ϊ:���ٿ���һ���µĿռ��������һ��col��С�����飬�����д�ŵ�Ԫ������Ϊint��
		//ѭ����ȥ
	}
	cout << "��Ϊ�����õ�������������" << endl;
	for (int m = 0; m<row; m++)
	{
		for (int k = 0; k<col; k++)
		{
			cout << "(" << m << k << "):";
			cin >> x[m][k];
		}
	}
	cout << "���鴴�����,����Ϊ������������飬��˶ԣ�����" << endl;


	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			cout << x[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "����������飬�������Ҫ��Ԫ��ֵ" << endl;
	cout << "������λ������" << endl;
	int a, b;
	cin >> a >> b;
	print(x, a, b);



	//����ִ�����ٹ��̣��Ƚ�ÿ��ָ��ָ����������٣��ٽ�����ָ���������٣������ڵ�������
	for(int i=0;i<row;i++)
	{
		delete [] x[i];
	}
	delete [] x;
	system("pause");
	return 0;
}