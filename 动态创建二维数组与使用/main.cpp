#include<iostream>

using namespace std;
void print(int **x, int a, int b)
{


	cout << x[a][b];
}
int main()
{

	cout << "------------------这是一个创建与调用使用动态二维数组的实例----------------------" << endl;
	//x是一个二维的int数组(x是一个指向指针的指针）
	int** x;
	//接受用户输入的行列值
	int row, col;
	cout << "请输入数组的行数" << endl;
	cin >> row;
	cout << "请输入数组的列数" << endl;
	cin >> col;
	//创建行指针
	x = new int*[row];//在内存中分配一个区域，用来存放一row大小的数组，
					  //数组中存放的类型为int*(指向int的指针)
					  //为每一行分配空间
	for (int i = 0; i<row; i++)
	{
		x[i] = new int[col];
		//刚才创建的指针数组，其中i=0是也就是指针数组中的第一个指针指向的
		//内容为:（再开辟一个新的空间用来存放一个col大小的数组，数组中存放的元素类型为int）
		//循环下去
	}
	cout << "请为创建好的数组输入数据" << endl;
	for (int m = 0; m<row; m++)
	{
		for (int k = 0; k<col; k++)
		{
			cout << "(" << m << k << "):";
			cin >> x[m][k];
		}
	}
	cout << "数组创建完毕,下面为您输出整个数组，请核对！！！" << endl;


	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			cout << x[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "下面调用数组，输出所需要的元素值" << endl;
	cout << "请输入位置因数" << endl;
	int a, b;
	cin >> a >> b;
	print(x, a, b);



	//下面执行销毁过程，先将每个指针指向的数组销毁，再将整个指针数组销毁，即由内到外销毁
	for(int i=0;i<row;i++)
	{
		delete [] x[i];
	}
	delete [] x;
	system("pause");
	return 0;
}