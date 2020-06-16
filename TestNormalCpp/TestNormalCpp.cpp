// TestNormalCpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
struct Point
{
	double x;
	double y;
	Point(double px1, double px2) { x = px1; y = px2; }
};
const double pi = 3.1415926535898;
const double m_dEntryCutLength = 5.0, rs = 101.30 / 2, ds = 31.50 / 2;
//const double m_dEntryCutLength = 5.0, rs = 50.65, ds = 2.36659;
double m_fLeftPoint_x, m_fLeftPoint_y;
double m_fRightPoint_x, m_fRightPoint_y;
double m_fCalCircleCenter_x, m_fCalCircleCenter_y;
double m_fPoint1_x, m_fPoint1_y;
double m_fPoint2_x, m_fPoint2_y;
double m_fPoint3_x, m_fPoint3_y;
double m_fPoint4_x, m_fPoint4_y;
double m_fPoint5_x, m_fPoint5_y;

void CalCircle(double x1, double x2, double x3, double x4, double x5, double y1, double y2, double y3, double y4, double y5)
{
	double k1, k2, k3, mx1, mx2, mx3, my1, my2, my3, km1, bm1, km2, bm2, km3, bm3;
	double xc, yc, xp1, xp2, yp1, yp2, xpm, ypm, R, alpha, beta, yin_l, yin_a, x1_yin, x2_yin, y1_yin, y2_yin;
	short i;
	double pi = 3.1415926535898;
	double dbOffset;
	k1 = (y2 - y1) / (x2 - x1);
	k2 = (y3 - y2) / (x3 - x2);
	if (k2 == 0)
		k2 = 0.000000001;  // 防止除以零
	k3 = (y1 - y3) / (x1 - x3);
	mx1 = (x1 + x2) / 2;
	my1 = (y1 + y2) / 2;
	mx2 = (x2 + x3) / 2;
	my2 = (y2 + y3) / 2;
	mx3 = (x3 + x1) / 2;
	my3 = (y3 + y1) / 2;
	km1 = -1 / k1;
	km2 = -1 / k2;
	km3 = -1 / k3;
	bm1 = 1 / k1 * mx1 + my1;
	bm2 = 1 / k2 * mx2 + my2;
	bm3 = 1 / k3 * mx3 + my3;
	xc = -(bm2 - bm1) / (km2 - km1);
	yc = km1 * xc + bm1;
	yin_l = m_dEntryCutLength;
	yin_a = 45 * pi / 180;


	double k6 = (y5 - y4) / (x5 - x4);
	double t1 = sqrt(pow(rs, 2) - pow(ds, 2));
	beta = atan(k6);
	double b6d = (beta > 0 ? 1 : -1) * t1 / cos(beta);
	double b6 = yc - k6 * xc + b6d;
	double a = 1 + pow(k6, 2);
	double b = 2 * b6*k6 - 2 * xc - 2 * yc*k6;
	double c = pow(xc, 2) + pow(b6, 2) - 2 * yc*b6 + pow(yc, 2) - pow(rs, 2);
	double delta = pow(b, 2) - 4 * a*c;
	double xr1 = (-b + sqrt(delta)) / 2 / a;
	double yr1 = k6 * xr1 + b6;
	double xr2 = (-b - sqrt(delta)) / 2 / a;
	double yr2 = k6 * xr2 + b6;

	double k7 = -1 / k6;
	double b7 = yc - k7 * xc;
	double a2 = 1 + pow(k7, 2);
	double b2 = 2 * b7*k7 - 2 * xc - 2 * yc*k7;
	double c2 = pow(xc, 2) + pow(b7, 2) - 2 * yc*b7 + pow(yc, 2) - pow(rs, 2);
	double delta2 = pow(b2, 2) - 4 * a2*c2;

	double xr3 = (-b2 + (k7 > 0 ? -1 : 1)* sqrt(delta2)) / 2 / a2;
	double yr3 = k7 * xr3 + b7;

	double xl = xr1 + cos(beta) * yin_l;
	double yl = yr1 + sin(beta) * yin_l;
	double xr = xr2 - cos(beta) * yin_l;
	double yr = yr2 - sin(beta) * yin_l;

	m_fCalCircleCenter_x = -xc;
	m_fCalCircleCenter_y = -yc;

	m_fLeftPoint_x = -xr1;
	m_fLeftPoint_y = -yr1;

	m_fRightPoint_x = -xr2;
	m_fRightPoint_y = -yr2;

	m_fPoint1_x = -xl;
	m_fPoint1_y = -yl;

	m_fPoint2_x = -xr + xl;
	m_fPoint2_y = -yr + yl;

	m_fPoint4_x = -xr3 + xr;
	m_fPoint4_y = -yr3 + yr;

	m_fPoint5_x = xr3 - xc;
	m_fPoint5_y = yr3 - yc;

	std::cout << "圆心(" << xc << "," << yc << ")\n";
	std::cout << "xr1(" << xr1 << "," << yr1 << ") xr2(" << xr2 << "," << yr2 << ")\n";
	std::cout << "右点(" << xr << "," << yr << ") 左点(" << xl << "," << yl << ") 圆上的点(" << xr3 << "," << yr3 << ")\n";
}
void CalCircle2(double x1, double x2, double x3, double x4, double x5, double y1, double y2, double y3, double y4, double y5)
{
	double k1, k2, k3, mx1, mx2, mx3, my1, my2, my3, km1, bm1, km2, bm2, km3, bm3;
	double xc, yc, xp1, xp2, yp1, yp2, xpm, ypm, R, alpha, beta, yin_l, yin_a, x1_yin, x2_yin, y1_yin, y2_yin;
	short i;
	double pi = 3.1415926535898;
	double dbOffset;
	k1 = (y2 - y1) / (x2 - x1);
	k2 = (y3 - y2) / (x3 - x2);
	if (k2 == 0)
		k2 = 0.000000001;  // 防止除以零
	k3 = (y1 - y3) / (x1 - x3);
	mx1 = (x1 + x2) / 2;
	my1 = (y1 + y2) / 2;
	mx2 = (x2 + x3) / 2;
	my2 = (y2 + y3) / 2;
	mx3 = (x3 + x1) / 2;
	my3 = (y3 + y1) / 2;
	km1 = -1 / k1;
	km2 = -1 / k2;
	km3 = -1 / k3;
	bm1 = 1 / k1 * mx1 + my1;
	bm2 = 1 / k2 * mx2 + my2;
	bm3 = 1 / k3 * mx3 + my3;
	xc = -(bm2 - bm1) / (km2 - km1);
	yc = km1 * xc + bm1;
	yin_l = m_dEntryCutLength;
	yin_a = 45 * pi / 180;


	double k6 = (y5 - y4) / (x5 - x4);
	double t1 = sqrt(pow(rs, 2) - pow(ds, 2));
	beta = atan(k6);
	double b6 = yc - k6 * xc + ((beta > 0) - 0.5) * 2 * t1 / cos(beta);
	double a = 1 + pow(k6, 2);
	double b = 2 * b6*k6 - 2 * xc - 2 * yc*k6;
	double c = pow(xc, 2) + pow(b6, 2) - 2 * yc*b6 + pow(yc, 2) - pow(rs, 2);
	double delta = pow(b, 2) - 4 * a*c;
	double xr1 = (-b + sqrt(delta)) / 2 / a;
	double yr1 = k6 * xr1 + b6;
	double xr2 = (-b - sqrt(delta)) / 2 / a;
	double yr2 = k6 * xr2 + b6;

	double k7 = -1 / k6;
	double b7 = yc - k7 * xc;
	double a2 = 1 + pow(k7, 2);
	double b2 = 2 * b7*k7 - 2 * xc - 2 * yc*k7;
	double c2 = pow(xc, 2) + pow(b7, 2) - 2 * yc*b7 + pow(yc, 2) - pow(rs, 2);
	double delta2 = pow(b2, 2) - 4 * a2*c2;

	double xr3 = (-b2 + (k7 > 0 ? -1 : 1)* sqrt(delta2)) / 2 / a2;
	double yr3 = k7 * xr3 + b7;

	double xl = xr1 + cos(beta) * yin_l;
	double yl = yr1 + sin(beta) * yin_l;
	double xr = xr2 - cos(beta) * yin_l;
	double yr = yr2 - sin(beta) * yin_l;

	m_fCalCircleCenter_x = -xc;
	m_fCalCircleCenter_y = -yc;

	m_fLeftPoint_x = -xr1;
	m_fLeftPoint_y = -yr1;

	m_fRightPoint_x = -xr2;
	m_fRightPoint_y = -yr2;

	m_fPoint1_x = -xl;
	m_fPoint1_y = -yl;

	m_fPoint2_x = -xr + xl;
	m_fPoint2_y = -yr + yl;

	m_fPoint4_x = -xr3 + xr;
	m_fPoint4_y = -yr3 + yr;

	m_fPoint5_x = xr3 - xc;
	m_fPoint5_y = yr3 - yc;

	std::cout << "圆心(" << xc << "," << yc << ")\n";
	std::cout << "xr1(" << xr1 << "," << yr1 << ") xr2(" << xr2 << "," << yr2 << ")\n";
	std::cout << "右点(" << xr << "," << yr << ") 左点(" << xl << "," << yl << ") 圆上的点(" << xr3 << "," << yr3 << ")";
}

int main()
{
	switch (0)
	{
	case 0:
	{
		//Point p1(111.295502, 175.710007), p2(177.335495, 63.199001), p3(45.202499, 63.176498), p4(136.660004, 29.332001), p5(87.897499, 30.022499);
		Point p1(111.061996, 175.563995), p2(177.050003, 63.075001), p3(44.969501, 63.097500), p4(137.117996, 29.464500), p5(83.572502, 29.787500);
		CalCircle(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);
		std::cout << "\n以下为第二次结果：\n\n";
		CalCircle2(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);
		break;
	}
	case 1:
	{

		break;
	}
	default:
		break;
	}

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件