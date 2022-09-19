// #include <bits/stdc++.h>
// using namespace std;
// int snt(int n)
// {
// 	if (n < 2)
// 		return 0;
// 	for (int i = 2; i <= sqrt(n); i++)
// 	{
// 		if (n % i == 0)
// 			return 0;
// 	}
// 	return true;
// }
// int ucln(int a, int b)
// {
// 	if (a % b == 0)
// 		return b;
// 	int r = a % b;
// 	while (r != 0)
// 	{
// 		r = a % b;
// 		a = b;
// 		b = r;
// 	}
// 	return a >= 0 ? a : abs(a);
// }
// int max(int a[], int n)
// {
// 	int max = a[0];
// 	for (int i = 1; i < n; i++)
// 	{
// 		if (a[i] > max)
// 			max = a[i];
// 	}
// 	return max;
// }
// int maxk(int a[100][100], int n, int m, int k)
// {
// 	int max = a[k][0];
// 	for (int i = 1; i < m; i++)
// 	{
// 		if (a[k][i] > max)
// 			max = a[k][i];
// 	}
// 	return max;
// }
// void swap(int &a, int &b)
// {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }
// void hoandoicot(int a[100][100], int n, int k, int l)
// {

// 	for (int j = 0; j < n; j++)
// 	{
// 		swap(a[j][k], a[j][l]);
// 	}
// }
// void xoaphantuk(int a[100], int n, int k)
// {
// 	for (int i = k; i < n - 1; i++)
// 	{
// 		a[i] = a[i + 1];
// 	}
// 	n--;
// }
// void XoaPhanTuGiaTriK(int a[100], int n, int k)
// {
// 	int i = 0;
// 	while (i < n)
// 	{
// 		if (a[i] == k)
// 			xoaphantuk(a, n, i);
// 		else
// 			i++;
// 	}
// }
// int main()
// {
// 	int n, m;
// 	cout << "nhap dong, cot: ";
// 	cin >> n;
// 	int a[100];
// 	cout << "nhap mang: \n";

// 	for (int j = 0; j < n; j++)
// 	{
// 		cin >> a[j];
// 	}

// 	int k;
// 	cin >> k;
// 	XoaPhanTuGiaTriK(a, n, k);
// 	// 	cout << "ket qua: \n";
// 	// 	for (int i = 0; i < m; i++)
// 	// 	{
// 	// 		for (int j = 0; j < n; j++)
// 	// 		{
// 	// 			cout << a[i][j] << " ";
// 	// 		}
// 	// 		cout << endl;
// 	// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// struct Point
// {
// 	int x;
// 	int y;
// };
// struct LINE
// {
// 	float a, b;
// };
// void nhapdiem(Point &A, Point &B)
// {
// 	cout << "nhap toa do A: ";
// 	cin >> A.x >> A.y;
// 	cout << "nhap toa do B: ";
// 	cin >> B.x >> B.y;
// }
// LINE duongthang(Point A, Point B)
// {
// 	LINE l;
// 	l.a = (B.y - A.y) / (B.x - A.x);
// 	l.b = A.y - (l.a * A.x);
// 	return l;
// }
// int main()
// {
// 	Point A, B;
// 	float a, b;
// 	nhapdiem(A, B);
// 	a = (B.y - A.y) / (B.x - A.x);
// 	b = A.y - (a * A.x);
// 	cout << "LINE y= " << a << "x + " << b << endl;
// }
// // BTVN: cho 2 duong thang line l1,l2; tìm giao điểm l1,l2

#include <bits/stdc++.h>
using namespace std;
class PHANSO
{
public:
	int tu;
	int mau;

	PHANSO(int tu, int mau)
	{
		this->tu = tu;
		this->mau = mau;
	}
	PHANSO cong(PHANSO ps)
	{
		PHANSO tong(0, 0);
		tong.tu = tu * ps.mau + ps.tu * mau;
		tong.mau = ps.mau * mau;
		return tong;
	}
};
int main()
{
	PHANSO ps1, ps2, ps3, ps4;
	ps1 = new PHANSO(1, 2);
	ps2 = new PHANSO(3, 4);
	ps3 = ps1.cong(ps2);
	cout << ps3;
	ps4 = ps3.cong(1);
	cout << ps4;
}
