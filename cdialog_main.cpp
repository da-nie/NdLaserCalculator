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
 ON_COMMAND(IDC_BUTTON_MAIN_CALCULATE_FLASH,OnButton_CalculateFlash)
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
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_U))->SetWindowText("1000");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_LENGTH))->SetWindowText("80");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_DIAMETR))->SetWindowText("10");

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_T))->SetWindowText("-");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_E))->SetWindowText("-");
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_BETA))->SetWindowText("-");

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
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_U))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_LENGTH))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_DIAMETR))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_T))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_E))->SetLimitText(100);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_BETA))->SetLimitText(100);
    
 MatherialList.push_back(SMatherialParam("�������� Nd:YAG","8.8E-19","1.81633","5E-3","5E+19","2.5E-4","0.59"));
 MatherialList.push_back(SMatherialParam("������ ���1","1.7E-20","1.521","2E-3","1.9E+20","390E-6","0.78"));
 MatherialList.push_back(SMatherialParam("������ ���19","2.0E-20","1.528","2E-3","4.68E+20","500E-6","0.45"));
 MatherialList.push_back(SMatherialParam("������ ���61","2.3E-20","1.538","2E-3","1.75E+20","410E-6","0.57"));
 MatherialList.push_back(SMatherialParam("������ ���6","1.0E-20","1.542","2E-3","1.96E+20","600E-6","0.75"));
 MatherialList.push_back(SMatherialParam("������ ���7","1.1E-20","1.542","2E-3","3.05E+20","490E-6","0.61"));
 MatherialList.push_back(SMatherialParam("������ ���8","1.1E-20","1.548","2E-3","5.16E+20","320E-6","0.37"));
 MatherialList.push_back(SMatherialParam("������ ���4 (Nd=3.5E+20)","3.8E-20","1.511","2E-3","3.5E+20","270E-6","0.70"));
 MatherialList.push_back(SMatherialParam("������ ���4 (Nd=5.0E+20)","3.8E-20","1.511","2E-3","5.0E+20","200E-6","0.50"));
 MatherialList.push_back(SMatherialParam("������ ���4 (Nd=7.4E+20)","3.8E-20","1.511","2E-3","7.4E+20","170E-6","0.40"));
 MatherialList.push_back(SMatherialParam("������ ���5","3.8E-20","1.527","2E-3","2.0E+20","300E-6","0.70"));

 MatherialList.push_back(SMatherialParam("������ ���21","3.2E-20","1.582","2E-3","1.40E+20","280E-6","0.73"));
 MatherialList.push_back(SMatherialParam("������ ���22","3.2E-20","1.582","2E-3","2.0E+20","300E-6","0.74"));
 MatherialList.push_back(SMatherialParam("������ ���23","3.2E-20","1.582","2E-3","3.60E+20","240E-6","0.6"));
 MatherialList.push_back(SMatherialParam("������ ���24","3.2E-20","1.582","2E-3","5.70E+20","190E-6","0.44"));
 MatherialList.push_back(SMatherialParam("������ ���25","3.0E-20","1.568","2E-3","2.33E+20","250E-6","0.64"));
 MatherialList.push_back(SMatherialParam("������ ���26","3.0E-20","1.564","2E-3","2.30E+20","250E-6","0.64"));
 MatherialList.push_back(SMatherialParam("������ ���27","3.0E-20","1.568","2E-3","12.70E+20","90E-6","0.23"));
 MatherialList.push_back(SMatherialParam("������ ���32","3.2E-20","1.587","2E-3","2.00E+20","289E-6","0.67"));
 MatherialList.push_back(SMatherialParam("������ ���34","3.2E-20","1.587","2E-3","5.60E+20","180E-6","0.40"));
 MatherialList.push_back(SMatherialParam("������ ���9","1.1E-20","1.516","2E-3","4.56E+20","430E-6","0.58"));

 size_t size=MatherialList.size();
 for(size_t n=0;n<size;n++) ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->AddString(MatherialList[n].Name.c_str());
 ((CComboBox*)GetDlgItem(IDC_COMBO_MAIN_MATHERIAL))->SetCurSel(0);

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
}
//----------------------------------------------------------------------------------------------------
//������ ������ "���������� ��������� �������"
//----------------------------------------------------------------------------------------------------
afx_msg void CDialog_Main::OnButton_CalculateFlash(void)
{
 static const size_t MAX_STRING_LENGTH=255;
 char str[255];

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_LENGTH))->GetWindowText(str,MAX_STRING_LENGTH); 
 double flash_length=atof(str);//����� ���������� ����������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_DIAMETR))->GetWindowText(str,MAX_STRING_LENGTH); 
 double flash_diametr=atof(str);//������� ���������� ����������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_U))->GetWindowText(str,MAX_STRING_LENGTH); 
 double flash_u=atof(str);//���������� �������

 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_C))->GetWindowText(str,MAX_STRING_LENGTH); 
 double flash_c=atof(str);//������� ������������� �������
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_L))->GetWindowText(str,MAX_STRING_LENGTH); 
 double flash_l=atof(str);//������������� ���������� �������

 if (flash_c<0) flash_c=0;
 if (flash_l<0) flash_l=0;
 double flash_time=2*1E-6*sqrt(flash_c*flash_l);//����� �������

 double k0=1.3*flash_length/flash_diametr;
 double z0=sqrt(flash_l/flash_c);
 double beta=k0/(sqrt(flash_u*z0));
 double e=flash_c*flash_u*flash_u/(2E6);

 sprintf(str,"%g",flash_time);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_T))->SetWindowText(str);
 sprintf(str,"%g",beta);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_BETA))->SetWindowText(str);
 sprintf(str,"%g",e);
 ((CEdit*)GetDlgItem(IDC_EDIT_MAIN_FLASH_E))->SetWindowText(str);
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
