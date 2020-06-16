#pragma once
#include "CommonDefine.h"
/****************************************
* ģ  ��  ���� SplitDataDll.h
* ����ļ��� 
* ���������� ����ģ��ƴ�Ӽӹ��ָ��Լ����㷨���ܺ�����װ
* ��       �ߣ� �״���
* ����ʱ�䣺 2017/06/07 9:25:00
* ��       ����  V1.000
* ��Ȩ���У� ������뼤��ɷ����޹�˾
* �޸ļ�¼���״ο���
****************************************/

class AFX_EXT_CLASS CSplitDataDll :public CObject
{
public:
	CSplitDataDll(void);
	~CSplitDataDll(void);

	/***************************** 
	* FunctionName: fnCheckRectCross 
	* 
	* Function:������������Ƿ��ཻ��������ȫ����
	* param[in] ptLeftBottom1 
	* param[in] ptRightTop1 
	* param[in] ptLeftBottom2 
	* param[in] ptRightTop2 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckRectCross(DPOINT ptLeftBottom1,DPOINT ptRightTop1,DPOINT ptLeftBottom2,DPOINT ptRightTop2);
	
	/***************************** 
	* FunctionName: fnDelClapLine 
	* 
	* Function:ɾ���ָ�ʱ�ظ����߶�
	*****************************/
	void fnDelClapLine();
	
	/***************************** 
	* FunctionName: fnLineRectCross 
	* 
	* Function:����ֱ������η����Ľ���
	* param[in] pt1 
	* param[in] pt2 
	* param[in] ptLeftTop 
	* param[in] ptRightBottom 
	* param[out] caCross 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnLineRectCross(DPOINT pt1,DPOINT pt2,DPOINT ptLeftTop,DPOINT ptRightBottom,DPOINT_ARRAY &caCross);

	//***********************************************************
	// * ��������: GetArcRect
	// * ���ܼ��: ��֪һ��Բ������Ϣ�������Բ������С���ο�
	// * ����1   : [DPOINT ptC]:Բ����Բ��
	// * ����2   : [double dbRadius]:�뾶
	// * ����3   : [double angleS]:��ʼ�Ƕ�(������),Բ������ʱ����㣬���нǶ�С��PIx2�������Ͻ����Ƕ�>��ʼ�Ƕȣ��������ж�С�ڵ����
	// *						   ������ĽǶȴ���2PIʱ������ᴦ��
	// * ����4   : [double angleE]:�����Ƕ�
	// * ����5   : [DPOINT& ptlb]:���ε����µ�����
	// * ����6   : [DPOINT& ptrt]:���ε����ϵ�����
	// * ��������: 	void :
	//***********************************************************
	void GetArcRect(DPOINT ptC,double dbRadius,double angleS,double angleE,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * ��������: GetCirCleRect
	// * ���ܼ��: ��֪һ��Բ����Ϣ�������Բ����С���ο�
	// * ����1   : [DPOINT ptC]:Բ��Բ��
	// * ����2   : [double dbRadius]:�뾶
	// * ����5   : [DPOINT& ptlb]:���ε����µ�����
	// * ����6   : [DPOINT& ptrt]:���ε����ϵ�����
	// * ��������: 	void :
	//***********************************************************
	void GetCircleRect(DPOINT ptC,double dbRadius,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * ��������: GetLineRect
	// * ���ܼ��: ��֪һ���߶ε���Ϣ��������߶ε���С���ο�
	// * ����1   : [DPOINT ptStr]:�߶����
	// * ����2   : [DPOINT ptEnd]:�߶��յ�
	// * ����5   : [DPOINT& ptlb]:���ε����µ�����
	// * ����6   : [DPOINT& ptrt]:���ε����ϵ�����
	// * ��������: 	void :
	//***********************************************************
	void GetLineRect(DPOINT ptStr,DPOINT ptEnd,DPOINT& ptlb,DPOINT& ptrt);

	//***********************************************************
	// * ��������: GetLineRectExt
	// * ���ܼ��: ��֪һ���߶ε���Ϣ��������߶ε���С���ο򣨺��ߺ��������⿼�ǣ�
	// * ����1   : [DPOINT ptStr]:�߶����
	// * ����2   : [DPOINT ptEnd]:�߶��յ�
	// * ����5   : [DPOINT& ptlb]:���ε����µ�����
	// * ����6   : [DPOINT& ptrt]:���ε����ϵ�����
	// * ��������: 	void :
	//***********************************************************
	void GetLineRectExt(DPOINT ptStr,DPOINT ptEnd,DPOINT& ptlb,DPOINT& ptrt,double dbExt = 0.1);

	void fnQuickSort(double* capts,int low,int high);
	int	 fnPartition(double* capts,int i,int j);

	/***************************** 
	* FunctionName: fnEqual 
	* 
	* Function: �������double���͵�ֵ�Ƿ����
	* param[in] dbValue1 
	* param[in] dbValue2 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnEqual(double dbValue1,double dbValue2);
	BOOL fnDoubleEqual(double dbValue1,double dbValue2);

	//***********************************************************
	// * ��������: IsPtInRect
	// * ���ܼ��: ��ptLB,ptRTΪ��׼���Σ��жϵ��Ƿ����ھ����У��������ھ��εı߽�
	// * ����1   : [DPOINT ptCur]:
	// * ����2   : [DPOINT ptLB]:
	// * ����3   : [DPOINT ptRT]:
	// * ��������: BOOL :
	//***********************************************************
	BOOL IsPtInRect(DPOINT ptCur,DPOINT ptLB,DPOINT ptRT);

	/***************************** 
	* FunctionName: fnCheckInLine 
	* 
	* Function:����1�Ƿ����߶�P2��P3��Χ��
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckInLine(DPOINT p1, DPOINT p2, DPOINT p3);

	/***************************** 
	* FunctionName: fnCheckPtInLine 
	* 
	* Function:����1�Ƿ����߶�P2��P3��Χ��
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckPtInLine(DPOINT p1, DPOINT p2, DPOINT p3,double dbExt = 0.1);

	/***************************** 
	* FunctionName: fnCheckPtInCircle 
	* 
	* Function:����1�Ƿ����߶�P2��P3��Χ��
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckPtInCircle(DPOINT p1, DPOINT p2, double dbdir,double dbExt = 0.1);

	/***************************** 
	* FunctionName: GetCross 
	* 
	* Function: ��ȡ����ֱ�ߵĽ���
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
	* Function: ���������Ĵ�С���ȱȽ�x���ٱȽ�y
	* param[in] p1 
	* param[in] p2 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckLarge(DPOINT p1, DPOINT p2);
	
	/***************************** 
	* FunctionName: fnCheckEqual 
	* 
	* Function: �ж��������Ƿ����
	* param[in] p1 
	* param[in] p2 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnCheckEqual(DPOINT p1, DPOINT p2);
	
	/***************************** 
	* FunctionName: fnGetParallelCross 
	* 
	* Function:��ȡ����ƽ���ߵĽ��㣬ֻ���غϵ�ƽ���߲��п����н���
	* param[in] p1 
	* param[in] p2 
	* param[in] p3 
	* param[in] p4 
	* param[out] caPoint 
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	*****************************/
	BOOL fnGetParallelCross(DPOINT p1, DPOINT p2, DPOINT p3, DPOINT p4, DPOINT_ARRAY &caPoint);

	//***********************************************************
	// * ��������: GetArcToHorLnCross
	// * ���ܼ��: ��֪һ��ֱ�ߵ�2���˵㣬Բ��������ĩ�㣬���ģ������ֱ�����Բ���Ľ���
	// * ����1   : [DPOINT ptHor1]:ˮƽ�߿�������꣬С���꣬��ֱ��ptVer1��С���꣬����
	// * ����2   : [DPOINT ptHor2]:ˮƽ�߿��ҵ����꣬�����꣬��ֱ��ptVer2�Ǵ����꣬����
	// * ����3   : [DPOINT ptStr]://Բ���ǰ�����ʱ��������ת��ĩ��ģ���ע���������Ĳ������γ�
	// * ����4   : [DPOINT ptEnd]://��Բ���Ƿ�������Ҫ��Բ��������Ļ����뽻������Ĳ���
	// * ����5   : [DPOINT ptCenter]:
	// * ����6   : [DPOINT& ptCrossa]:����1
	// * ����7   : [DPOINT& ptCrossb]:����2
	// * ����8   : [int& nCounts]:���󵽵ļ������㣬���2��
	// * ��������: BOOL :TRUE�н��㣬FALSE�����ڽ���
	//***********************************************************
	BOOL GetLineToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,DPOINT pt1,DPOINT pt2,DPOINT& ptCross);
	BOOL GetLineToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,DPOINT pt1,DPOINT pt2,DPOINT& ptCross);

	BOOL GetArcToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,DPOINT ptStr,DPOINT ptEnd,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);
	BOOL GetArcToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,DPOINT ptStr,DPOINT ptEnd,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);

	BOOL GetCirToHorLnCross(DPOINT ptHor1,DPOINT ptHor2,double dbRadius,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);
	BOOL GetCirToVerLnCross(DPOINT ptVer1,DPOINT ptVer2,double dbRadius,DPOINT ptCenter,DPOINT& ptCrossa,DPOINT& ptCrossb,int& nCounts);

	//***********************************************************
	// * ��������: RectOutRect
	// * ���ܼ��: ��ptR1,ptR2Ϊ��׼���Σ����ж�pta,ptb�ľ��������Ƿ������(����һ�������غ�)
	// * ����1   : [DPOINT ptLB]:���µ�
	// * ����2   : [DPOINT ptRT]:���ϵ�
	// * ����3   : [DPOINT ptlb]:���µ�
	// * ����4   : [DPOINT ptrt]:���ϵ�
	// * ��������: BOOL :
	//***********************************************************
	BOOL RectOutRect(DPOINT ptLB,DPOINT ptRT, DPOINT ptlb,DPOINT ptrt);

	//***********************************************************
	// * ��������: RectInRect
	// * ���ܼ��:  ��ptR1,ptR2Ϊ��׼���Σ����ж�pta,ptb�ľ����Ƿ��ڻ�׼������(����һ�����߼��������غ�)
	// * ����1   : [DPOINT ptLB]:���µ�
	// * ����2   : [DPOINT ptRT]:���ϵ�
	// * ����3   : [DPOINT ptlb]:���µ�
	// * ����4   : [DPOINT ptrt]:���ϵ�
	// * ��������: 	BOOL :
	//***********************************************************
	BOOL RectInRect(DPOINT ptLB,DPOINT ptRT, DPOINT ptlb,DPOINT ptrt);

	//��֪�߶���ֹ�㣬����β���ӳ�ָ�����Ⱥ������
	void fnGetLineExt(DPOINT pts,DPOINT pte,double dbstr,double dbend,DPOINT& ptStart,DPOINT& ptEnd);
	void fnGetLineExtForClosePL(DPOINT pts,DPOINT pte,double dbstr,double dbend,DPOINT& ptStart,DPOINT& ptEnd);
	//��֪Բ����һ�㣬����תָ��������ĵ�����꣬Ĭ�ϻ���Ϊ��ʱ����ʱ����ת����ʱΪ˳ʱ����ת
	void fnGetArcExt(DPOINT ptc,DPOINT pt1,double dbdir,double dbrclen,DPOINT& ptres);
	void fnGetArcExtForClosePL(DPOINT ptc,DPOINT pt1,double dbdir,double dbrclen,DPOINT& ptres);
	
	/*�Ƚ�double��������
	���� dbNum1, dbNum2 �Ƚϵ�����������ֵ
	���� 0 ���
	1 dbNum1 > dbNum2
	-1 dbNum1 < dbNum2
	*/
	int fnCompareDouble(double dbNum1,double dbNum2);

	/***************************** 
	* FunctionName: fnCalcPtByPtAngle
	* 
	* Function:����һ�������ת�ǶȺ�������
	* param[in] 
	* param[out] 
	*****************************/
	void fnCalcPtByPtAngle(DPOINT pt1,DPOINT ptbase,double dbAngle,DPOINT &pt2);
};

