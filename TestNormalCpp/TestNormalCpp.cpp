// TestNormalCpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
struct Point
{
	double x;
	double y;
	Point(double px1, double px2) { x = px1; y = px2; }
};

void CalCircle(double x1, double x2, double x3, double x4, double x5, double y1, double y2, double y3, double y4, double y5)
{
	const double m_dEntryCutLength = 5.0;
	const double pi = 3.1415926535898;
	double m_fLeftPoint_x, m_fLeftPoint_y;
	double m_fRightPoint_x, m_fRightPoint_y;
	double m_fCalCircleCenter_x, m_fCalCircleCenter_y;
	double m_fPoint1_x, m_fPoint1_y;
	double m_fPoint2_x, m_fPoint2_y;
	double m_fPoint4_x, m_fPoint4_y;
	double m_fPoint5_x, m_fPoint5_y;
	double k1, k2, k3, mx1, mx2, my1, my2, km1, bm1, km2, bm2;
	double xc, yc, beta, yin_l, yin_a;
	k1 = (y2 - y1) / (x2 - x1);
	k2 = (y3 - y2) / (x3 - x2);
	if (k2 == 0)
		k2 = 0.000000001;  // 防止除以零
	k3 = (y1 - y3) / (x1 - x3);
	mx1 = (x1 + x2) / 2;
	my1 = (y1 + y2) / 2;
	mx2 = (x2 + x3) / 2;
	my2 = (y2 + y3) / 2;
	km1 = -1 / k1;
	km2 = -1 / k2;
	bm1 = 1 / k1 * mx1 + my1;
	bm2 = 1 / k2 * mx2 + my2;
	xc = -(bm2 - bm1) / (km2 - km1);
	yc = km1 * xc + bm1;
	yin_l = m_dEntryCutLength;
	yin_a = 45 * pi / 180;

	const double rs = 101.30 / 2;
	const double ds = 31.50 / 2;
	double k6 = (y5 - y4) / (x5 - x4);
	double t1 = sqrt(pow(rs, 2) - pow(ds, 2));
	beta = atan(k6);
	double b6d = t1 / cos(beta);
	double b6 = yc - k6 * xc - b6d;
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
	double c2 = pow(xc, 2) + pow(b7, 2) - 2 * yc * b7 + pow(yc, 2) - pow(rs, 2);
	double delta2 = pow(b2, 2) - 4 * a2 * c2;

	double xr3 = (-b2 + (k7 > 0 ? -1 : 1)* sqrt(delta2)) / 2 / a2;
	double yr3 = k7 * xr3 + b7;

	double xr4 = (-b2 - sqrt(delta2)) / 2 / a2;
	double yr4 = k7 * xr4 + b7;

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

	cout << "(xr3(" << xr3 << ") = (-b2(" << b2 << ") + (k7(" << k7 << ") > 0 ? -1 : 1)* sqrt(delta2(" << delta2 << "))) / 2 / a2(" << a2 << "))" << endl;
	cout << "yr3(" << yr3 << ") = k7(" << k7 << ") * xr3(" << xr3 << ") + b7(" << b7 << ")" << endl;
	cout << "圆心(" << xc << "," << yc << ")" << endl;
	cout << "xr1(" << xr1 << "," << yr1 << ") xr2(" << xr2 << "," << yr2 << ")" << endl;
	cout << "右点(" << xr << "," << yr << ") 左点(" << xl << "," << yl << ") 圆上的点(" << xr3 << "," << yr3 << ")"<<endl;
	cout << "圆上另外一点(" << xr4 << "," << yr4 << ")" << endl << endl;

#if 0
	CTime g_tProcessTime = CTime::GetCurrentTime();							//开始切割时间
	CString strDate = g_tProcessTime.Format(_T("%Y%m%d"));
	CString strTime = g_tProcessTime.Format(_T("%H-%M-%S"));
	CString strPath = _T("D:\\MyTestData");									//数据路径
	CString strPathName = strPath + _T("\\") + strDate + _T("\\") + strTime + _T("calc.txt");	//数据保存文件名
	CString strmsg;
	//以日期创建文件夹保存数据
	fnCreateFolder(strPath, strDate, 7);
	FILE* pFile = fopen(strPathName, "a");
	strmsg.Format(_T("输入的点 p1(%f,%f),p2(%f,%f),p3(%f,%f),p4(%f,%f),p5(%f,%f)\n"), m_fFirstPoint_x, m_fFirstPoint_y
		, m_fSecondPoint_x, m_fSecondPoint_y, m_fThirdPoint_x, m_fThirdPoint_y, m_fFourthPoint_x, m_fFourthPoint_y, m_fFifthPoint_x, m_fFifthPoint_y);
	fwrite(strmsg, sizeof(char), strlen(strmsg), pFile);

	strmsg.Format(_T("计算的点 k6 = %f, beta = %f, b6 = %f center:(%f,%f),圆上交点1:(%f,%f),圆上交点2:(%f,%f)\n圆起始点:(%f,%f),切割线右点:(%f,%f),切割线左点:(%f,%f)\n"), k6, beta, b6, xc, yc, xr1, yr1, xr2, yr2, xr3, yr3, xr, yr, xl, yl);
	fwrite(strmsg, sizeof(char), strlen(strmsg), pFile);

	strmsg.Format(_T("(xr3 = (-b2 + (k7 > 0 ? -1 : 1)* sqrt(delta2)) / 2 / a2) :\n%f = (-%f + (%f > 0 ? -1 : 1)* sqrt(%f)) / 2 / %f \n"), xr3, b2, k7, delta2, a2);
	fwrite(strmsg, sizeof(char), strlen(strmsg), pFile);

	strmsg.Format(_T("输出的点 center:(%f,%f),CCDToLaser:(%f,%f),p1:(%f,%f),p2:(%f,%f),p4:(%f,%f),p5:(%f,%f)\n"), m_fCalCircleCenter_x, m_fCalCircleCenter_y
		, m_fCCDToLaserX, m_fCCDToLaserY, m_fPoint1_x, m_fPoint1_y, m_fPoint2_x, m_fPoint2_y, m_fPoint4_x, m_fPoint4_y, m_fPoint5_x, m_fPoint5_y);
	fwrite(strmsg, sizeof(char), strlen(strmsg), pFile);
	fclose(pFile);
#endif
}

class MyNums
{
public:
	MyNums(int num)
	{
		m_nums = num;
		std::cout << "MyNums构造函数" << std::endl;
	}

	~MyNums()
	{
		cout << "MyNums的析构函数" << endl;
	}
	void operator++()
	{
		cout << "MyNums的operator++()" << endl;
		m_nums++;
	}
	void operator++(int num)
	{
		cout << "MyNums的operator++(int num)" << endl;
		cout << "num is " << num << endl;
		m_nums++;
	}
	void operator+(int num)
	{
		cout << "MyNums的operator+(int num)" << endl;
		cout << "num is " << num << endl;
		m_nums += num;
	}
	void ShowNums()
	{
		std::cout << "m_nums is " << m_nums << std::endl;
	}
private:
	int m_nums;
};
class MyString
{
public:
	MyString()
	{
		cout << "MyString的构造函数" << endl;
	}

	~MyString()
	{
		cout << "m_str为" << m_str << endl << "MyString析构函数" << endl;
	}
	friend void setMyString(MyString& mystring, string s);
private:
	string m_str;
};

void setMyString(MyString& mystring, string s)
{
	mystring.m_str = s;
}

int main()
{
	switch (0)
	{
	case 0:
	{
		
		{
			Point p1(110.661499, 175.317993), p2(176.304001, 62.818001), p3(44.098000, 62.828999), p4(135.733002, 29.268999), p5(90.978996, 29.336000);
			cout << "P1数据为：" << endl;
			CalCircle(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);
		}
		{
			Point p1(110.651001, 175.175003), p2(176.586502, 62.664001), p3(44.725498, 62.296501), p4(145.087006, 32.388500), p5(92.181503, 26.899000);
			cout << "P2数据为：" << endl;
			CalCircle(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);
		}
		{
			Point p1(110.724503, 174.727493), p2(177.266998, 62.250000), p3(45.175999, 62.261002), p4(127.445503, 25.427500), p5(74.341003, 33.622002);
			cout << "P3数据为：" << endl;
			CalCircle(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);
		}
		break;
	}
	case 1:
	{
		MyNums num1(10);
		++num1;
		num1.ShowNums();
		num1+20;
		num1.ShowNums();
		num1 ++;
		num1.ShowNums();
		break;
	}
	case 2:
	{
		MyString ss;
		setMyString(ss, "123");
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
