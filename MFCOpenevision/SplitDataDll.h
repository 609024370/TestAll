#pragma once
#include "CommonDefine.h"
/****************************************
* 模  块  名： SplitDataDll.h
* 相关文件： 
* 功能描述： 用于模板拼接加工分割以及各算法功能函数封装
* 作       者： 雷春翔
* 开发时间： 2017/06/07 9:25:00
* 版       本：  V1.000
* 版权所有： 苏州天弘激光股份有限公司
* 修改记录：首次开发
****************************************/

class AFX_EXT_CLASS CSplitDataDll :public CObject
{
public:
	CSplitDataDll(void);
	~CSplitDataDll(void);

	/***************************** 
	* FunctionName: fnCheckRectCross 
	* 
	* Function:检查两个矩形是否相交，包括完全包含
	* param[in] ptLeftBottom1 
	* param[in] ptRightTop1 
	* param[in] ptLeftBottom2 
	* param[in] ptRightTop2 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckRectCross(DPOINT ptLeftBottom1,DPOINT ptRightTop1,DPOINT ptLeftBottom2,DPOINT ptRightTop2);
	
	/***************************** 
	* FunctionName: fnDelClapLine 
	* 
	* Function:删除分割时重复的线段
	*****************************/
	void fnDelClapLine();
	
	/***************************** 
	* FunctionName: fnLineRectCross 
	* 
	* Function:计算直线与矩形分区的交点
	* param[in] pt1 
	* param[in] pt2 
	* param[in] ptLeftTop 
	* param[in] ptRightBottom 
	* param[out] caCross 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnLineRectCross(DPOINT pt1,DPOINT pt2,DPOINT ptLeftTop,DPOINT ptRightBottom,DPOINT_ARRAY &caCross);

	//***********************************************************
	// * 函数名称: GetArcRect
	// * 功能简介: 已知一个圆弧的信息，求这个圆弧的最小矩形框
	// * 参数1   : [DPOINT ptC]:圆弧的圆心
	// * 参数2   : [double dbRadius]:半径
	// * 参数3   : [double angleS]:开始角度(弧度制),圆弧按逆时针计算，所有角度小于PIx2，理论上结束角度>开始角度，函数会判断小于的情况
	// *						   当传入的角度大于2PI时，里面会处理
	// * 参数4   : [double angleE]:结束角度
	// * 参数5   : [DPOINT& ptlb]:矩形的左下点坐标
	// * 参数6   : [DPOINT& ptrt]:矩形的右上点坐标
	// * 返回类型: 	void :
	//***********************************************************
	void GetArcRect(DPOINT ptC,double dbRadius,double angleS,double angleE,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * 函数名称: GetCirCleRect
	// * 功能简介: 已知一个圆的信息，求这个圆的最小矩形框
	// * 参数1   : [DPOINT ptC]:圆的圆心
	// * 参数2   : [double dbRadius]:半径
	// * 参数5   : [DPOINT& ptlb]:矩形的左下点坐标
	// * 参数6   : [DPOINT& ptrt]:矩形的右上点坐标
	// * 返回类型: 	void :
	//***********************************************************
	void GetCircleRect(DPOINT ptC,double dbRadius,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * 函数名称: GetLineRect
	// * 功能简介: 已知一个线段的信息，求这个线段的最小矩形框
	// * 参数1   : [DPOINT ptStr]:线段起点
	// * 参数2   : [DPOINT ptEnd]:线段终点
	// * 参数5   : [DPOINT& ptlb]:矩形的左下点坐标
	// * 参数6   : [DPOINT& ptrt]:矩形的右上点坐标
	// * 返回类型: 	void :
	//***********************************************************
	void GetLineRect(DPOINT ptStr,DPOINT ptEnd,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * 函数名称: GetLineRectExt
	// * 功能简介: 已知一个线段的信息，求这个线段的最小矩形框（横线和竖线特殊考虑）
	// * 参数1   : [DPOINT ptStr]:线段起点
	// * 参数2   : [DPOINT ptEnd]:线段终点
	// * 参数5   : [DPOINT& ptlb]:矩形的左下点坐标
	// * 参数6   : [DPOINT& ptrt]:矩形的右上点坐标
	// * 返回类型: 	void :
	//***********************************************************
	void GetLineRectExt(DPOINT ptStr,DPOINT ptEnd,DPOINT& ptlb,DPOINT& ptrt,double dbExt = 0.1);

	void fnQuickSort(double* capts,int low,int high);
	int	 fnPartition(double* capts,int i,int j);

	/***************************** 
	* FunctionName: fnEqual 
	* 
	* Function: 检查两个double类型的值是否相等
	* param[in] dbValue1 
	* param[in] dbValue2 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnEqual(double dbValue1,double dbValue2);
	BOOL fnDoubleEqual(double dbValue1,double dbValue2);

	//***********************************************************
	// * 函数名称: IsPtInRect
	// * 功能简介: 以ptLB,ptRT为基准矩形，判断点是否落在矩形中，包括落在矩形的边界
	// * 参数1   : [DPOINT ptCur]:
	// * 参数2   : [DPOINT ptLB]:
	// * 参数3   : [DPOINT ptRT]:
	// * 返回类型: BOOL :
	//***********************************************************
	BOOL IsPtInRect(DPOINT ptCur,DPOINT ptLB,DPOINT ptRT);

	/***************************** 
	* FunctionName: fnCheckInLine 
	* 
	* Function:检查点1是否在线段P2，P3范围内
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckInLine(DPOINT p1, DPOINT p2, DPOINT p3);

	/***************************** 
	* FunctionName: fnCheckPtInLine 
	* 
	* Function:检查点1是否在线段P2，P3范围内
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckPtInLine(DPOINT p1, DPOINT p2, DPOINT p3,double dbExt = 0.1);

	/***************************** 
	* FunctionName: fnCheckPtInCircle 
	* 
	* Function:检查点1是否在线段P2，P3范围内
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckPtInCircle(DPOINT p1, DPOINT p2, double dbdir,double dbExt = 0.1);

	/***************************** 
	* FunctionName: GetCross 
	* 
	* Function: 获取两条直线的交点
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* param[in] p4 
	* param[out] caPoint 
	* return[int]
	*****************************/
	int GetCross(DPOINT p1, DPOINT p2, DPOINT p3, DPOINT p4, DPOINT_ARRAY &caPoint);
	
	/***************************** 
	* FunctionName: fnCheckLarge 
	* 
	* Function: 检查两个点的大小，先比较x，再比较y
	* param[in] p1 
	* param[in] p2 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckLarge(DPOINT p1, DPOINT p2);
	
	/***************************** 
	* FunctionName: fnCheckEqual 
	* 
	* Function: 判断两个点是否相等
	* param[in] p1 
	* param[in] p2 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnCheckEqual(DPOINT p1, DPOINT p2);
	
	/***************************** 
	* FunctionName: fnGetParallelCross 
	* 
	* Function:获取两条平行线的交点，只有重合的平行线才有可能有交点
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* param[in] p4 
	* param[out] caPoint 
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnGetParallelCross(DPOINT p1, DPOINT p2, DPOINT p3, DPOINT p4, DPOINT_ARRAY &caPoint);

	//***********************************************************
	// * 函数名称: GetArcToHorLnCross
	// * 功能简介: 已知一条直线的2个端点，圆弧的起点和末点，中心，求出该直线与该圆弧的焦点
	// * 参数1   : [DPOINT ptHor1]:水平线靠左的坐标，小坐标，竖直线ptVer1是小坐标，靠下
	// * 参数2   : [DPOINT ptHor2]:水平线靠右的坐标，大坐标，竖直线ptVer2是大坐标，靠上
	// * 参数3   : [DPOINT ptStr]://圆弧是按照逆时针从起点旋转到末点的，请注意你所给的参数所形成
	// * 参数4   : [DPOINT ptEnd]://的圆弧是否是你想要的圆弧，否则的话，请交换传入的参数
	// * 参数5   : [DPOINT ptCenter]:
	// * 参数6   : [DPOINT& ptCrossa]:焦点1
	// * 参数7   : [DPOINT& ptCrossb]:焦点2
	// * 参数8   : [int& nCounts]:所求到的几个焦点，最多2个
	// * 返回类型: BOOL :TRUE有焦点，FALSE不存在焦点
	//***********************************************************
	BOOL GetLineToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,DPOINT pt1,DPOINT pt2,DPOINT& ptCross);
	BOOL GetLineToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,DPOINT pt1,DPOINT pt2,DPOINT& ptCross);

	BOOL GetArcToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,DPOINT ptStr,DPOINT ptEnd,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);
	BOOL GetArcToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,DPOINT ptStr,DPOINT ptEnd,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);

	BOOL GetCirToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,double dbRadius,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);
	BOOL GetCirToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,double dbRadius,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);

	//***********************************************************
	// * 函数名称: RectOutRect
	// * 功能简介: 以ptR1,ptR2为基准矩形，来判断pta,ptb的矩形与它是否相离的(包括一条边相重合)
	// * 参数1   : [DPOINT ptLB]:左下点
	// * 参数2   : [DPOINT ptRT]:右上点
	// * 参数3   : [DPOINT ptlb]:左下点
	// * 参数4   : [DPOINT ptrt]:右上点
	// * 返回类型: BOOL :
	//***********************************************************
	BOOL RectOutRect(DPOINT ptLB,DPOINT ptRT, DPOINT ptlb,DPOINT ptrt);

	//***********************************************************
	// * 函数名称: RectInRect
	// * 功能简介:  以ptR1,ptR2为基准矩形，来判断pta,ptb的矩形是否在基准矩形内(包括一条或者几条边相重合)
	// * 参数1   : [DPOINT ptLB]:左下点
	// * 参数2   : [DPOINT ptRT]:右上点
	// * 参数3   : [DPOINT ptlb]:左下点
	// * 参数4   : [DPOINT ptrt]:右上点
	// * 返回类型: 	BOOL :
	//***********************************************************
	BOOL RectInRect(DPOINT ptLB,DPOINT ptRT, DPOINT ptlb,DPOINT ptrt);

	//已知线段起止点，求首尾各延长指定长度后的坐标
	void fnGetLineExt(DPOINT pts,DPOINT pte,double dbstr,double dbend,DPOINT& ptStart,DPOINT& ptEnd);
	void fnGetLineExtForClosePL(DPOINT pts,DPOINT pte,double dbstr,double dbend,DPOINT& ptStart,DPOINT& ptEnd);
	//已知圆弧上一点，求旋转指定弧长后的点的坐标，默认弧长为正时是逆时针旋转，负时为顺时针旋转
	void fnGetArcExt(DPOINT ptc,DPOINT pt1,double dbdir,double dbrclen,DPOINT& ptres);
	void fnGetArcExtForClosePL(DPOINT ptc,DPOINT pt1,double dbdir,double dbrclen,DPOINT& ptres);
	
	/*比较double类型数据
	输入 dbNum1, dbNum2 比较的两个数的数值
	返回 0 相等
	1 dbNum1 > dbNum2
	-1 dbNum1 < dbNum2
	*/
	int fnCompareDouble(double dbNum1,double dbNum2);

	/***************************** 
	* FunctionName: fnCalcPtByPtAngle
	* 
	* Function:根据一点计算旋转角度后新坐标
	* param[in] 
	* param[out] 
	*****************************/
	void fnCalcPtByPtAngle(DPOINT pt1,DPOINT ptbase,double dbAngle,DPOINT &pt2);
};

