/************************************************************************/
/* ���ڶ���һЩ���õ�ȫ�ֱ������궨�壬�ṹ���                                                                     */
/************************************************************************/
#ifndef CONTROLLER_DEFINE_DELPHI_H
#define CONTROLLER_DEFINE_DELPHI_H
/*****************************
* ģ �� ��   : CommonDefine.h
* ����ļ�	 :
* ��������	 :
* ��    ��   :�����
* ����ʱ��   : 2017/8/1 11:07
* ��    ��   : V1.000
* ��    Ȩ   : ������뼤��ɷ����޹�˾
* �޸ļ�¼   :
*****************************/

#define ANGLEPENRADIAN	57.29577951308232	//(��/����)
const float PI = 3.1415926f;

#define DL_IMAGERECEIVE		WM_USER + 1000

//100����һ��ѭ��
#define POINTLOOP	100

//double���ͱȽϼ�Сֵ
#define DOUBLE_POSITIVE_ZERO	0.0000001
#define DOUBLE_NEGATIVE_ZERO	-0.0000001

//���ת������
#define AXIAS_X_RATIO	10000
#define AXIAS_Y_RATIO	10000
#define AXIAS_Z_RATIO	1000
#define AXIAS_E_RATIO	5000
#define AXIAS_W_RATIO	5000

//��ʱʱ��
#define TIME_OUT		5*60

//����һ���Ի��򱳾�ɫ
const COLORREF sDlgBkColor = GetSysColor(COLOR_3DFACE);

//����ת��Ϊ�Ƕ�
#define ARC_ANGEL	57.29577951308232;	//����ת�Ƕ�
#define ANGEL_ARC	0.0174532925199433;	//�Ƕ�ת����

//�������
#define MAX_AXIS_NUM	3
#define MAX_IO_PORT		16

//��ɫ
#define  COLOR_UI			(RGB(236,233,216))		//������ɫ
#define  COLOR_RED			(RGB(255,0,0))			//��ɫ
#define	 COLOR_BLACK		(RGB(0,0,0))			//��ɫ
#define  COLOR_GREY			(RGB(152,152,152))		//��ɫ
#define  COLOR_GREY_SYSTEM	(RGB(236,233,216))
#define	 COLOR_YELLOW		(RGB(255, 255, 0))		//��ɫ
#define	 COLOR_GREEN		(RGB(0, 255, 0))		//��ɫ
#define  COLOR_CYAN			(RGB( 0, 255, 255))		//��ɫ
#define  COLOR_BLUE			(RGB( 0, 0, 255))		//��ɫ
#define  COLOR_MAGENTA		(RGB(255, 0, 255))		//��ɫ
#define  COLOR_WHITE		(RGB(255, 255, 255))	//��ɫ
#define  COLOR_HIGHTGREY	(RGB(192, 192, 192))	//�߻�ɫ
#define  COLOR_PURPLE		(RGB(0.63*255,0.13*255,0.94*255))//�ۺ�ɫ
#define	 COLOR_BTN_BG  		(RGB(230, 220, 140))	//��ť����ɫ
//#define  COLOR_MYBACKGROUND	(RGB(155, 235, 235))	//�������ɫ
#define  COLOR_MYBACKGROUND	(RGB(153, 204, 255))	//�������ɫ

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
//��������
enum AXIS_LOAD
{
	//�ᶨ��
	AXIS_LOAD_H = 0,//�����ᣨ��ֱ�ƶ���
	AXIS_LOAD_V = 1,//�����ᣨˮƽ�ƶ���
	AXIS_UNLOAD_H = 2,//�����ᣨ��ֱ�ƶ���
	AXIS_UNLOAD_V = 3,//�����ᣨˮƽ�ƶ���
	AXIS_F = 4,//������
};
//�ӹ�������ƽ̨״̬
enum PLATFORM_STATUS
{
	PLATFORM_WAIT = 0,	   //�ȴ�����
	PLATFORM_LOAD = 1,	   //����
	PLATFORM_LASER = 2,	   //�ӹ�
	PLATFORM_UNLOAD = 3,	   //����
};
//IO�˿ڶ���
struct IO_DEFINE
{
	//����˿�
	UINT uInVacuum;				//���ѹ���ź�
	UINT uInVacuumLoad;			//��������ѹ���ź�
	UINT uInVacuumUnLoad;		//��������ѹ���ź�
	UINT uInBoxLoad;			//���Ϻ�������
	UINT uInBoxUnLoad;			//���Ϻ�������
	UINT uInJawLoad;			//���ϼ�צ������
	UINT uInJawUnLoad;			//���ϼ�צ������
	UINT uInLoadInPlace;		//���ϵ�λ
	UINT uInUnLoadInPlace;		//���ϵ�λ
	UINT uInNgBoxUnLoad;
	UINT uInCylinderMoving;
	UINT uInCylinderOrigin;
	UINT uInIsPaperLoad;		//���ϼ���Ƿ�ΪֽƬ
	UINT uInSafeDoor;			//��ȫ��

	//����˿�
	UINT uOutLightUpPower;		//�������Դ
	UINT uOutLightDownPower;	//�������Դ
	UINT uOutAbsorb;			//�������
	UINT uOutAbsorbLoad;		//��������
	UINT uOutAbsorbUnLoad;		//��������
	UINT uOutGreen;				//�̵�
	UINT uOutYellow;			//�Ƶ�
	UINT uOutRed;				//���
	UINT uOutBuzzer;			//������
	UINT uOutHuff;				//����
	UINT uOutBrushControl;
	UINT uOutLaserEnable;		//������ʹ��
};

struct AUTO_PARAM
{
	float fLoadHSafePos;		//�����ᣨ��ֱ������λ��
	float fLoadVSafePos;		//�����ᣨˮƽ������λ��
	float fUnLoadHSafePos;		//�����ᣨ��ֱ������λ��
	float fUnLoadVSafePos;		//�����ᣨˮƽ������λ��
	float fLoadVDownPos;		//�����ᣨˮƽ������λ��
	float fLoadVDownWaitPos;	//�����ᣨˮƽ�����ϵȴ�λ��
	float fLoadVUpPos;			//�����ᣨˮƽ��ȡ��λ��
	float fLoadHDownPos;		//�����ᣨ��ֱ������λ��
	float fUnLoadVUpPos;		//�����ᣨˮƽ��ȡ��λ��
	float fUnLoadVUpWaitPos;	//�����ᣨˮƽ��ȡ�ϵȴ�λ��
	float fUnLoadHUpPos;		//�����ᣨ��ֱ��ȡ��λ��
	float fUnLoadVDownPos;		//�����ᣨˮƽ��OK����λ��
	float fUnLoadVDownPosNG;	//�����ᣨˮƽ��NG����λ��
	float fUnLoadHDownPos;		//�����ᣨ��ֱ������λ��
	float fLoadWaitHuffPos;		//�ȴ�����λ��
	float fUnLoadVBoxHeight;
	float fThreeInchPos;	//���羧Բ����λ��
	float fFourInchPos;		//�Ĵ羧Բ����λ��
	float fFiveInchPos;		//��羧Բ����λ��
	float fSixInchPos;		//���羧Բ����λ��
	float fThreeInchPos2;	//���羧Բ�ſ�λ��
	float fFourInchPos2;	//�Ĵ羧Բ�ſ�λ��
	float fFiveInchPos2;	//��羧Բ�ſ�λ��
	float fSixInchPos2;		//���羧Բ�ſ�λ��
	float fAutoLoadWaferPosX;//����ƽ̨ȡ��λ��X;
	float fAutoLoadWaferPosY;
	float fAutoUnLoadWaferPosX;
	float fAutoUnLoadWaferPosY;
	float fMoveDistance;	//���������ƶ�����
	int	  nMoveSpeed;		//���������ٶ�
	int   nMotionAxis;			//���
	int	  nMotionMode;			//�˶�ģʽ
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

//double���͵������
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
	DPOINT ptCamera;		//����Զ�ץ��λ��
	double dbAngleTor1;		//��λƥ������趨--�Ƕ�
	double dbScaleTor1;		//ƥ������趨--���ű�
	double dbMinScore1;		//�趨ƥ��ʱ����С�ķ���ֵ

	double dbAngleTor2;		//ȱ�ݼ��ƥ������趨--�Ƕ�
	double dbScaleTor2;		//ƥ������趨--���ű�
	double dbMinScore2;		//�趨ƥ��ʱ����С�ķ���ֵ

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

//�������
struct CAMERA_PARAM
{
	CRect		rect;			//�������ر��õľ��ο��С
	BOOL		bHorMirror;		//ˮƽͼ����
	BOOL		bVerMirror;		//��ֱͼ����
	UINT		nImageSizeX;	//Ӱ���СX
	UINT		nImageSizeY;	//Ӱ���СY
	int			nVisionCenterX;	//Ӱ������λ��
	int			nVisionCenterY;	//Ӱ������λ��
	int			nExplodeTime;	//�ع�ʱ��
	int			nExplodeGain;	//�ع�����
	int			nFrameRate;		//ˢ��֡��
	int			nGammaGain;		//Gamma����
	int			nCenterShape;	//Ӱ��������ʾԲ�λ���������
	int			nCursorShape;	//�����ʾԲ�λ��Ǿ���
	double		dbCursorRadius;	//���������ʾԲ�ε�ֱ�����������εĿ��
	double 		dbPixelSizeX;	//���ر�x
	double		dbPixelSizeY;	//���ر�y
	double		dbZoomShowX;	//������ʾ
	double		dbZoomShowY;	//������ʾ
	double		dbCenterRadius;	//Բ��ֱ�����������εĿ��
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

	//����=������
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
//guageֱ���������
struct IMAGE_GAUGE_POS
{
	float fGaugeCenterX;	//����X����
	float fGaugeCenterY;	//����Y����
	float fGaugeAngle;		//�Ƕ�
	float fGaugeTolerance;	//���
	float fGaugeLength;		//����
	DPOINT pointLT;			//����
	DPOINT pointRT;			//����
	DPOINT pointRB;			//����
	DPOINT pointLB;			//����
	IMAGE_GAUGE_POS()
	{
		fGaugeCenterX = 200;
		fGaugeCenterY = 200;
		fGaugeAngle = 0;
		fGaugeTolerance = 20;
		fGaugeLength = 100;
	}
};
//guageֱ����ϲ���
struct IMAGE_GAUGE_PARAM
{
	UINT nGaugeThreshold;	//�ٽ�Ҷ�ֵ
	UINT nGaugeSmoothing;	//ƽ����
	UINT nGaugeFilterPass;	//PASS
	UINT nGaugeSamplingStep;//��������
	UINT nGaugeThickness;	//
	UINT nGaugeAmplitude;	//
	int nGaugeType;			//Ѱ�߷�ʽ
	int nGaugeChoice;		//���ѡ��
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
//gaugeֱ����Ͻ��
struct IMAGE_GAUGE_RESULT
{
	float fResultCenterX;
	float fResultCenterY;
	float fResultAngle;
	UINT nResultSamples;
	UINT nResultValid;
	DPOINT pointStart;	//�����һ������
	DPOINT pointEnd;	//������һ������
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
