#ifndef C_DIALOG_MAIN_H
#define C_DIALOG_MAIN_H

//****************************************************************************************************
//����� �������� ����
//****************************************************************************************************

//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include "stdafx.h"
#include <stdint.h>
#include <vector>
#include <string>

//****************************************************************************************************
//����������������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************

//****************************************************************************************************
//��������������� ����������
//****************************************************************************************************

//****************************************************************************************************
//����� �������� ����
//****************************************************************************************************
class CDialog_Main:public CDialog
{
 public:
  //-������������---------------------------------------------------------------------------------------
  //-���������------------------------------------------------------------------------------------------

  //��������� ���������
  struct SMatherialParam
  {
   std::string Sigma;//������� �������������� ���������
   std::string N;//���������� �����������
   std::string Alpha;//����������� ���������
   std::string Nd;//������������ ����� �������
   std::string Tau;//����� ��������� ����������������
   std::string Npq;//��������� ����� ����������������
 
   SMatherialParam(const std::string &sigma,const std::string &n,const std::string &alpha,const std::string &nd,const std::string &tau,const std::string &npq)
   {
    Sigma=sigma;
    N=n;
    Alpha=alpha;
    Nd=nd;
    Tau=tau;
	Npq=npq;
   }
  };
  //-���������------------------------------------------------------------------------------------------
 private:
  //-����������-----------------------------------------------------------------------------------------
  std::vector<SMatherialParam> MatherialList;//������ ����������
 public:
  //-�����������----------------------------------------------------------------------------------------
  CDialog_Main(LPCTSTR lpszTemplateName,CWnd* pParentWnd);
  //-����������-----------------------------------------------------------------------------------------
  ~CDialog_Main();
 public:
  //-�������� �������-----------------------------------------------------------------------------------
 private:
  //-�������� �������-----------------------------------------------------------------------------------  
 protected:
  //-������� ��������� ���������------------------------------------------------------------------------   
  DECLARE_MESSAGE_MAP()
  afx_msg void OnOK(void);
  afx_msg void OnCancel(void);
  afx_msg BOOL OnInitDialog(void);
  afx_msg void OnDestroy(void);
  afx_msg void OnButton_Calculate(void);//������ ������ "����������"
  afx_msg void OnButton_Apply(void);//������ ������ "���������"
};

#endif