/************************************************************************/
/* 用于定于一些常用的全局变量，宏定义，结构体等                                                                     */
/************************************************************************/
#ifndef CONTROLLER_DEFINE_DELPHI_H
#define CONTROLLER_DEFINE_DELPHI_H
/*****************************
* 模 块 名   : CommonDefine.h
* 相关文件	 :
* 功能描述	 :
* 作    者   :许军成
* 开发时间   : 2017/8/1 11:07
* 版    本   : V1.000
* 版    权   : 苏州天弘激光股份有限公司
* 修改记录   :
*****************************/

#define ANGLEPENRADIAN	57.29577951308232	//(度/弧度)
const float PI = 3.1415926f;

#define DL_IMAGERECEIVE		WM_USER + 1000

//100个点一个循环
#define POINTLOOP	100

//double类型比较极小值
#define DOUBLE_POSITIVE_ZERO	0.0000001
#define DOUBLE_NEGATIVE_ZERO	-0.0000001

//电机转换比例
#define AXIAS_X_RATIO	10000
#define AXIAS_Y_RATIO	10000
#define AXIAS_Z_RATIO	1000
#define AXIAS_E_RATIO	5000
#define AXIAS_W_RATIO	5000

//超时时间
#define TIME_OUT		5*60

//定义一个对话框背景色
const COLORREF sDlgBkColor = GetSysColor(COLOR_3DFACE);

//弧度转换为角度
#define ARC_ANGEL	57.29577951308232;	//弧度转角度
#define ANGEL_ARC	0.0174532925199433;	//角度转弧度

//最大轴数
#define MAX_AXIS_NUM	3
#define MAX_IO_PORT		16

//颜色
#define  COLOR_UI			(RGB(236,233,216))		//界面颜色
#define  COLOR_RED			(RGB(255,0,0))			//红色
#define	 COLOR_BLACK		(RGB(0,0,0))			//黑色
#define  COLOR_GREY			(RGB(152,152,152))		//灰色
#define  COLOR_GREY_SYSTEM	(RGB(236,233,216))
#define	 COLOR_YELLOW		(RGB(255, 255, 0))		//黄色
#define	 COLOR_GREEN		(RGB(0, 255, 0))		//绿色
#define  COLOR_CYAN			(RGB( 0, 255, 255))		//青色
#define  COLOR_BLUE			(RGB( 0, 0, 255))		//蓝色
#define  COLOR_MAGENTA		(RGB(255, 0, 255))		//紫色
#define  COLOR_WHITE		(RGB(255, 255, 255))	//白色
#define  COLOR_HIGHTGREY	(RGB(192, 192, 192))	//高灰色
#define  COLOR_PURPLE		(RGB(0.63*255,0.13*255,0.94*255))//粉红色
#define	 COLOR_BTN_BG  		(RGB(230, 220, 140))	//按钮背景色
//#define  COLOR_MYBACKGROUND	(RGB(155, 235, 235))	//软件背景色
#define  COLOR_MYBACKGROUND	(RGB(153, 204, 255))	//软件背景色

enum UI_STATUS
{
	STATUS_IDE = 0,
	STATUS_PROCESS = 1,
};

enum OUTPUT_STATUS
{
	OUT_ON = 1,
	OUT_OFF = 0,
};

enum INPUT_STATUS
{
	IN_ON = 0,
	IN_OFF = 1,
};
enum PROCESS_MODE
{
	MANU_MODE = 0,
	AUTO_MODE = 1,
	SEMI_MODE = 2,
};
enum WAFER_TYPR
{
	THREE_CHIP = 0,
	FOUR_CHIP = 1,
	FIVE_CHIP = 2,
	SIX_CHIP = 3,
};
enum EVISION_MODE
{
	EVISION_FINDER = 0,
	EVISION_MATCHER = 1,
	EVISION_GAUGE = 2,
	EVISION_MANUAL = 3,
};
//上下料轴
enum AXIS_LOAD
{
	//轴定义
	AXIS_LOAD_H = 0,//上料轴（垂直移动）
	AXIS_LOAD_V = 1,//上料轴（水平移动）
	AXIS_UNLOAD_H = 2,//下料轴（垂直移动）
	AXIS_UNLOAD_V = 3,//下料轴（水平移动）
	AXIS_F = 4,//规整轴
};
//加工过程中平台状态
enum PLATFORM_STATUS
{
	PLATFORM_WAIT = 0,	   //等待上料
	PLATFORM_LOAD = 1,	   //上料
	PLATFORM_LASER = 2,	   //加工
	PLATFORM_UNLOAD = 3,	   //下料
};
//IO端口定义
struct IO_DEFINE
{
	//输入端口
	UINT uInVacuum;				//真空压力信号
	UINT uInVacuumLoad;			//上料吸盘压力信号
	UINT uInVacuumUnLoad;		//下料吸盘压力信号
	UINT uInBoxLoad;			//上料盒有无料
	UINT uInBoxUnLoad;			//下料盒有无料
	UINT uInJawLoad;			//上料夹爪有无料
	UINT uInJawUnLoad;			//下料夹爪有无料
	UINT uInLoadInPlace;		//上料到位
	UINT uInUnLoadInPlace;		//下料到位
	UINT uInNgBoxUnLoad;
	UINT uInCylinderMoving;
	UINT uInCylinderOrigin;
	UINT uInIsPaperLoad;		//上料检测是否为纸片
	UINT uInSafeDoor;			//安全门

	//输出端口
	UINT uOutLightUpPower;		//上相机光源
	UINT uOutLightDownPower;	//下相机光源
	UINT uOutAbsorb;			//真空吸附
	UINT uOutAbsorbLoad;		//上料吸附
	UINT uOutAbsorbUnLoad;		//下料吸附
	UINT uOutGreen;				//绿灯
	UINT uOutYellow;			//黄灯
	UINT uOutRed;				//红灯
	UINT uOutBuzzer;			//蜂鸣器
	UINT uOutHuff;				//吹气
	UINT uOutBrushControl;
	UINT uOutLaserEnable;		//激光器使能
};

struct AUTO_PARAM
{
	float fLoadHSafePos;		//上料轴（垂直）避让位置
	float fLoadVSafePos;		//上料轴（水平）避让位置
	float fUnLoadHSafePos;		//下料轴（垂直）避让位置
	float fUnLoadVSafePos;		//下料轴（水平）避让位置
	float fLoadVDownPos;		//上料轴（水平）放料位置
	float fLoadVDownWaitPos;	//上料轴（水平）放料等待位置
	float fLoadVUpPos;			//上料轴（水平）取料位置
	float fLoadHDownPos;		//上料轴（垂直）放料位置
	float fUnLoadVUpPos;		//下料轴（水平）取料位置
	float fUnLoadVUpWaitPos;	//下料轴（水平）取料等待位置
	float fUnLoadHUpPos;		//下料轴（垂直）取料位置
	float fUnLoadVDownPos;		//下料轴（水平）OK放料位置
	float fUnLoadVDownPosNG;	//下料轴（水平）NG放料位置
	float fUnLoadHDownPos;		//下料轴（垂直）放料位置
	float fLoadWaitHuffPos;		//等待吹气位置
	float fUnLoadVBoxHeight;
	float fThreeInchPos;	//三寸晶圆规整位置
	float fFourInchPos;		//四寸晶圆规整位置
	float fFiveInchPos;		//五寸晶圆规整位置
	float fSixInchPos;		//六寸晶圆规整位置
	float fThreeInchPos2;	//三寸晶圆放开位置
	float fFourInchPos2;	//四寸晶圆放开位置
	float fFiveInchPos2;	//五寸晶圆放开位置
	float fSixInchPos2;		//六寸晶圆放开位置
	float fAutoLoadWaferPosX;//工作平台取料位置X;
	float fAutoLoadWaferPosY;
	float fAutoUnLoadWaferPosX;
	float fAutoUnLoadWaferPosY;
	float fMoveDistance;	//上下料轴移动距离
	int	  nMoveSpeed;		//上下料轴速度
	int   nMotionAxis;			//轴号
	int	  nMotionMode;			//运动模式
	AUTO_PARAM()
	{
		fLoadHSafePos = 0.f;
		fUnLoadHSafePos = 0.f;
		fLoadVDownPos = 0.f;
		fLoadVUpPos = 0.f;
		fLoadHDownPos = 0.f;
		fUnLoadVUpPos = 0.f;
		fUnLoadHUpPos = 0.f;
		fUnLoadVDownPos = 0.f;
		fLoadWaitHuffPos = 0.f;
		fUnLoadVBoxHeight = 0.f;
		fThreeInchPos = 0.f;
		fFourInchPos = 0.f;
		fAutoLoadWaferPosX = 0.f;
		fAutoLoadWaferPosY = 0.f;
		fAutoUnLoadWaferPosX = 0.f;
		fAutoUnLoadWaferPosY = 0.f;
		fMoveDistance = 0.f;
		nMoveSpeed = 0;
		nMotionAxis = 0;
		nMotionMode = 0;
	}
};

//double类型的坐标点
struct DPOINT
{
	double x;
	double y;
	double z;

	DPOINT::DPOINT()
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}

	DPOINT::DPOINT(double dbx, double dby, double dbz)
	{
		x = dbx;
		y = dby;
		z = dbz;
	}

	const DPOINT& operator=(const DPOINT& point)
	{
		if (this == &point)
		{
			return *this;
		}
		else
		{
			x = point.x;
			y = point.y;
			z = point.z;
			return point;
		}
	}

	const DPOINT& operator-(const DPOINT& point)
	{
		x = x - point.x;
		y = y - point.y;
		z = z - point.z;

		return *this;
	}

	const DPOINT& operator+(const DPOINT& point)
	{
		x = x + point.x;
		y = y + point.y;
		z = z + point.z;

		return *this;
	}
};
typedef CArray<DPOINT, DPOINT&> DPOINTARRAY;
typedef CArray<DPOINT, DPOINT&> DPOINT_ARRAY;

struct CircleData
{
	DPOINT center;
	double radius;
};

struct IMAGE_MATCH_PARAM
{
	DPOINT ptCamera;		//相机自动抓靶位置
	double dbAngleTor1;		//对位匹配参数设定--角度
	double dbScaleTor1;		//匹配参数设定--缩放比
	double dbMinScore1;		//设定匹配时的最小的分数值

	double dbAngleTor2;		//缺陷检测匹配参数设定--角度
	double dbScaleTor2;		//匹配参数设定--缩放比
	double dbMinScore2;		//设定匹配时的最小的分数值

	float  fSizeReferance;

	IMAGE_MATCH_PARAM()
	{
		dbMinScore1 = -1;
		dbAngleTor1 = 15;
		dbScaleTor1 = 0.1;

		dbMinScore2 = -1;
		dbAngleTor2 = 15;
		dbScaleTor2 = 0.1;
		fSizeReferance = 0;
	}
};

//相机参数
struct CAMERA_PARAM
{
	CRect		rect;			//计算像素比用的矩形框大小
	BOOL		bHorMirror;		//水平图像镜像
	BOOL		bVerMirror;		//垂直图像镜像
	UINT		nImageSizeX;	//影像大小X
	UINT		nImageSizeY;	//影像大小Y
	int			nVisionCenterX;	//影像中心位置
	int			nVisionCenterY;	//影像中心位置
	int			nExplodeTime;	//曝光时间
	int			nExplodeGain;	//曝光增益
	int			nFrameRate;		//刷新帧率
	int			nGammaGain;		//Gamma增益
	int			nCenterShape;	//影像中心显示圆形还是正方形
	int			nCursorShape;	//鼠标显示圆形还是矩形
	double		dbCursorRadius;	//鼠标中心显示圆形的直径或者正方形的宽度
	double 		dbPixelSizeX;	//像素比x
	double		dbPixelSizeY;	//像素比y
	double		dbZoomShowX;	//缩放显示
	double		dbZoomShowY;	//缩放显示
	double		dbCenterRadius;	//圆形直径或者正方形的宽度
	BOOL		bUse;

	CAMERA_PARAM::CAMERA_PARAM()
	{
		nImageSizeX = 975;
		nImageSizeY = 678;
		nVisionCenterX = 0;
		nVisionCenterY = 0;
		dbPixelSizeX = 0;
		dbPixelSizeY = 0;
		bHorMirror = FALSE;
		bVerMirror = FALSE;
		dbZoomShowX = 0;
		dbZoomShowY = 0;
		dbCenterRadius = 1.00;
		dbCursorRadius = 0.5;
		rect = CRect(520, 340, 550, 370);
		nExplodeTime = 10;
		nExplodeGain = 1;
		nFrameRate = 10;
		nGammaGain = 1;
		bUse = TRUE;
	}

	//重载=操作符
	const CAMERA_PARAM& operator=(const CAMERA_PARAM& param)
	{
		if (this == &param)
		{
			return   *this;
		}
		else
		{
			nImageSizeX = param.nImageSizeX;
			nImageSizeY = param.nImageSizeY;
			nVisionCenterX = param.nVisionCenterX;
			nVisionCenterY = param.nVisionCenterY;
			dbPixelSizeX = param.dbPixelSizeX;
			dbPixelSizeY = param.dbPixelSizeY;
			bHorMirror = param.bHorMirror;
			bVerMirror = param.bVerMirror;
			dbZoomShowX = param.dbZoomShowX;
			dbZoomShowY = param.dbZoomShowY;
			nCenterShape = param.nCenterShape;
			dbCenterRadius = param.dbCenterRadius;
			nCursorShape = param.nCursorShape;
			dbCursorRadius = param.dbCursorRadius;
			rect = param.rect;
			nExplodeTime = param.nExplodeTime;
			nExplodeGain = param.nExplodeGain;
			nFrameRate = param.nFrameRate;
			nGammaGain = param.nGammaGain;
			return   param;
		}
	}
};
//guage直线拟合坐标
struct IMAGE_GAUGE_POS
{
	float fGaugeCenterX;	//中心X坐标
	float fGaugeCenterY;	//中心Y坐标
	float fGaugeAngle;		//角度
	float fGaugeTolerance;	//宽度
	float fGaugeLength;		//长度
	DPOINT pointLT;			//左上
	DPOINT pointRT;			//右上
	DPOINT pointRB;			//右下
	DPOINT pointLB;			//左下
	IMAGE_GAUGE_POS()
	{
		fGaugeCenterX = 200;
		fGaugeCenterY = 200;
		fGaugeAngle = 0;
		fGaugeTolerance = 20;
		fGaugeLength = 100;
	}
};
//guage直线拟合参数
struct IMAGE_GAUGE_PARAM
{
	UINT nGaugeThreshold;	//临界灰度值
	UINT nGaugeSmoothing;	//平滑度
	UINT nGaugeFilterPass;	//PASS
	UINT nGaugeSamplingStep;//采样周期
	UINT nGaugeThickness;	//
	UINT nGaugeAmplitude;	//
	int nGaugeType;			//寻边方式
	int nGaugeChoice;		//结果选择
	int nIndex;
	IMAGE_GAUGE_PARAM()
	{
		nGaugeThreshold = 20;
		nGaugeSmoothing = 1;
		nGaugeFilterPass = 0;
		nGaugeSamplingStep = 5;
		nGaugeThickness = 1;
		nGaugeAmplitude = 5;
		nGaugeType = 0;
		nGaugeChoice = 0;
		nIndex = 0;
	}
};
//gauge直线拟合结果
struct IMAGE_GAUGE_RESULT
{
	float fResultCenterX;
	float fResultCenterY;
	float fResultAngle;
	UINT nResultSamples;
	UINT nResultValid;
	DPOINT pointStart;	//结果第一点坐标
	DPOINT pointEnd;	//结果最后一点坐标
	IMAGE_GAUGE_RESULT()
	{
		fResultCenterX = 0;
		fResultCenterY = 0;
		fResultAngle = 0;
		nResultSamples = 0;
		nResultValid = 0;
	}
};
#endif
