//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include "cdialog_main.h"
#include <string>
#include <math.h>

//****************************************************************************************************
//���������� ����������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************

//****************************************************************************************************
//����������������
//****************************************************************************************************


//****************************************************************************************************
//����� ���������
//****************************************************************************************************

BEGIN_MESSAGE_MAP(CDialog_Main,CDialog)
 ON_WM_DESTROY()
 ON_COMMAND(IDC_BUTTON_MAIN_CALCULATE,OnButton_Calculate)
 ON_COMMAND(IDC_BUTTON_MAIN_APPLY,OnButton_Apply)
END_MESSAGE_MAP()

//****************************************************************************************************
//����������� � ����������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//�����������
//----------------------------------------------------------------------------------------------------
CDialog_Main::CDialog_Main(LPCTSTR lpszTemplateName, CWnd* pParentWnd):CDialog(lpszTemplateName,pParentWnd)
{ 
}
//----------------------------------------------------------------------------------------------------
//����������
//----------------------------------------------------------------------------------------------------
CDialog_Main::~CDialog_Main()
{
}

//****************************************************************************************************
//�������� �������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------------------------

//****************************************************************************************************
//������� ��������� ���������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnOK(void)
{
}
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnCancel(void)
{
 CDialog::OnCancel();
}
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
afx_msg BOOL CDialog_Main::OnInitDialog(void)
{
 //����������� �������� ����������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_LENGTH))->SetWindowText("26");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_DIAMETR))->SetWindowText("1.2");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_SIGMA))->SetWindowText("1.1E-20");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_N))->SetWindowText("1.548");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ALPHA))->SetWindowText("2E-3");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ND))->SetWindowText("5E+20");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_TAU))->SetWindowText("320E-6");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RA))->SetWindowText("0.99");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RB))->SetWindowText("0.3");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AB_LENGTH))->SetWindowText("50");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_R))->SetWindowText("0.05");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_TAU))->SetWindowText("1E-3");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_NPQ))->SetWindowText("0.37");

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NR))->SetWindowText("0.43"); 
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NT))->SetWindowText("0.82"); 
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NA))->SetWindowText("0.28");

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_C))->SetWindowText("2000");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_L))->SetWindowText("230");

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_FLASH_TIME))->SetWindowText("-");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_W_BORDER))->SetWindowText("-");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_W_LAMP_BORDER))->SetWindowText("-");

 std::string text;
 text+="������������� �������������-������������� ��������������\r\n������������� ������� ������� ����� � ��������.\r\n\r\n";
 text+="������������� ��������-��������� �������� (��� �������) �����,\r\n���������� ��������� � �������� �����, � �������� (��� �������),\r\n���������� ������ � ������ ������������ ���������.\r\n\r\n";
 text+="������������� �� ����������-���� ����������� � ����� �����,\r\n������� ������������� ����������� � ���.\r\n\r\n";
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_TEXT))->SetWindowText(text.c_str());

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_LENGTH))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_DIAMETR))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_SIGMA))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_N))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ALPHA))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ND))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_TAU))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RA))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RB))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AB_LENGTH))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_R))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_TAU))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_NPQ))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NR))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NT))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NA))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_C))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_L))->SetLimitText(100);
   
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("�������� Nd:YAG");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���1");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���19");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���61");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���6");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���7");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���8");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���4 (G=3.5E+20)");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���4 (G=5.0E+20)");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���4 (G=7.4E+20)");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString("������ ���5");
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->SetCurSel(0);
 
 MatherialList.push_back(SMatherialParam("8.8E-19","1.81633","5E-3","5E+19","2.5E-4","0.59"));
 MatherialList.push_back(SMatherialParam("1.7E-20","1.521","2E-3","1.9E+20","390E-6","0.78"));
 MatherialList.push_back(SMatherialParam("2.0E-20","1.528","2E-3","4.68E+20","500E-6","0.45"));
 MatherialList.push_back(SMatherialParam("2.3E-20","1.538","2E-3","1.75E+20","410E-6","0.57"));
 MatherialList.push_back(SMatherialParam("1.0E-20","1.542","2E-3","1.96E+20","600E-6","0.75"));
 MatherialList.push_back(SMatherialParam("1.1E-20","1.542","2E-3","3.05E+20","490E-6","0.61"));
 MatherialList.push_back(SMatherialParam("1.1E-20","1.548","2E-3","5.16E+20","320E-6","0.37"));
 MatherialList.push_back(SMatherialParam("3.8E-20","1.511","2E-3","3.5E+20","270E-6","0.70"));
 MatherialList.push_back(SMatherialParam("3.8E-20","1.511","2E-3","5.0E+20","200E-6","0.50"));
 MatherialList.push_back(SMatherialParam("3.8E-20","1.511","2E-3","7.4E+20","170E-6","0.40"));
 MatherialList.push_back(SMatherialParam("3.8E-20","1.527","2E-3","2.0E+20","300E-6","0.70"));

 return(CDialog::OnInitDialog());
}
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnDestroy(void)
{
 CDialog::OnDestroy();
}

double LN(double v)
{
 return(log(v)/log(exp(1.0)));
}

//----------------------------------------------------------------------------------------------------
//������ ������ "����������"
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnButton_Calculate(void)
{
 static const size_t MAX_STRING_LENGTH=255;
 static const double PI=3.1415926535897932384626433832795;
 char str[255];
 //�������� ���������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_LENGTH))->GetWindowText(str,MAX_STRING_LENGTH);
 double la=atof(str);//����� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_DIAMETR))->GetWindowText(str,MAX_STRING_LENGTH);
 double da=atof(str);//������� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_SIGMA))->GetWindowText(str,MAX_STRING_LENGTH);
 double sigma=atof(str);//������� ��������� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_N))->GetWindowText(str,MAX_STRING_LENGTH);
 double na=atof(str);//���������� ����������� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ALPHA))->GetWindowText(str,MAX_STRING_LENGTH);
 double alphaa=atof(str);//����������� ���������� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ND))->GetWindowText(str,MAX_STRING_LENGTH);
 double nd=atof(str);//������������ ����� �������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_TAU))->GetWindowText(str,MAX_STRING_LENGTH);
 double ta=atof(str);//����� ��������� ������������� � ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RA))->GetWindowText(str,MAX_STRING_LENGTH);
 double r1=atof(str);//����������� ��������� ������� �������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_RB))->GetWindowText(str,MAX_STRING_LENGTH);
 double r2=atof(str);//����������� ��������� ��������� �������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AB_LENGTH))->GetWindowText(str,MAX_STRING_LENGTH);
 double l=atof(str);//���������� ����� ���������
((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_R))->GetWindowText(str,MAX_STRING_LENGTH);
 double ra=atof(str);//����������� ��������� ��
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_TAU))->GetWindowText(str,MAX_STRING_LENGTH);
 double ti=atof(str);//����� �������� �����
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_NPQ))->GetWindowText(str,MAX_STRING_LENGTH); 
 double Npq=atof(str);//��������� ����� �������������

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NR))->GetWindowText(str,MAX_STRING_LENGTH); 
 double Nr=atof(str);//������������� �������������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NT))->GetWindowText(str,MAX_STRING_LENGTH); 
 double Nt=atof(str);//������������� ��������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_NA))->GetWindowText(str,MAX_STRING_LENGTH); 
 double Na=atof(str);//������������� �� ����������

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_C))->GetWindowText(str,MAX_STRING_LENGTH); 
 double lamp_c=atof(str);//������� ������������� �������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_L))->GetWindowText(str,MAX_STRING_LENGTH); 
 double lamp_l=atof(str);//������������� ���������� �������

 if (lamp_c<0) lamp_c=0;
 if (lamp_l<0) lamp_l=0;
 double flash_time=2*1E-6*sqrt(lamp_c*lamp_l);
 
 double h=6.6E-34;//���������� ������
 double lambda=1064E-9;//����� ����� ���������, �
 double c=3E+8;//�������� �����, �/�

 double f=c/lambda;//������� ���������
 double e=h*f;//������� ������ ���������

 double va=PI*da*da/4*la;//����� ��
 double l0=l+(na-1)*la;//���������� ����� ����
 double tae=exp(-alphaa*la)*(1-ra)*(1-ra);//����������� ��
 double kp=1/(2*l0)*(LN(1/(r1*r2))+2*LN(1/tae));//���������� ����������� ������ ������ � ����������
 
 double n2yag=1.8E+15;//����������� ������ N2 ��� ������������ 5e+19 � ��^3 � YAG
 double nndyag=5E+19; 
 double n2=n2yag*(nd/nndyag);//����������� ������ N2
 
 double fti=(ti/ta)/(1-exp(-ti/ta));//������ ������� ������
 double wkr=fti*va*e*n2;
 double g=1;//������������� ������� ������������� ������������ �������� �������� ����� �� �������
 double wp=fti*va*e*l0*kp/(la*sigma*g)+wkr;//����������� ������� ������� (�����������)
 
 /*
 FILE *file=fopen("t.txt","wb");
 fprintf(file,"va:%f\r\n",va);
 fprintf(file,"l0:%f\r\n",l0);
 fprintf(file,"tae:%f\r\n",tae);
 fprintf(file,"kp:%f\r\n",kp);
 fprintf(file,"fti:%f\r\n",fti);
 fprintf(file,"e:%g\r\n",e);
 fprintf(file,"wkr:%g\r\n",wkr);
 fclose(file);
 */
 
 //��������� ��� �������
 //Nr - ������������� �������������� ������������� ������� ������� ����� � �������� � ������������ ���������,��������������� ������� ������� �������� ����� (������������� �������������, ����. radiative efficiency);
 //Nt - ��������� �������� (��� �������) �����, ���������� ��������� � �������� �����, � �������� (��� �������),���������� ������ � ������ ������������ ��������� (������������� ��������, ����. transfer efficiency);
 //Na - ���� ����������� � ����� �����, ������� ������������� ����������� � ��� (������������� �� ����������, ����. absorption efficiency);
 //Npq - ������������� ���� ����������� �������� (��� �������), ������� �������� � ��������� �������� ��������� ������ (��������� ����� �� �������� ��� �� �������, ����. power, ��� energy, quantum efficiency).



 double kpd=Nr*Nt*Na*Npq;//��� �������
 double wf=1/kpd*wp;

 sprintf(str,"%g",wp);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_W_BORDER))->SetWindowText(str);
 sprintf(str,"%g",wf);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_W_LAMP_BORDER))->SetWindowText(str);
 sprintf(str,"%g",flash_time);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_LAMP_FLASH_TIME))->SetWindowText(str);

}
//----------------------------------------------------------------------------------------------------
//������ ������ "���������"
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnButton_Apply(void)
{
 size_t index=((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->GetCurSel();
 SMatherialParam &sMatherialParam=MatherialList[index];

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_SIGMA))->SetWindowText(sMatherialParam.Sigma.c_str());
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_N))->SetWindowText(sMatherialParam.N.c_str());
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ALPHA))->SetWindowText(sMatherialParam.Alpha.c_str());
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_ND))->SetWindowText(sMatherialParam.Nd.c_str());
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_TAU))->SetWindowText(sMatherialParam.Tau.c_str());
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_AE_NPQ))->SetWindowText(sMatherialParam.Npq.c_str());
}
//****************************************************************************************************
//�������� �������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------------------------
