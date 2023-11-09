#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
float TichCot(float[][10], int, int, int);

int main()
{
	float a[10][10];
	int n, m, c;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "nhap cot ";
	cin >> c;
	cout << "Tich la " << TichCot(a, n, m, c);

	return 0;
}

void Nhap(float a[][10], int& n, int& m)
{
	cout << "Nhap dong: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < m;i++)
		for (int j = 0;j < n;j++)
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[][10], int n, int m)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			cout << setw(8) << setprecision(4) << a[i][j];
		cout << endl;
	}
}

float TichCot(float a[][10], int n, int m, int c)
{
	float k = 1;
	for (int j = 0;j < m;j++)
	{
		if (a[j][c] > 0)
			k = k * a[j][c];
	}
	return k;
}