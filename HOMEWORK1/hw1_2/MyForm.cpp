#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

//���ε{����������ҫ��� ��@����� (Single-Threaded Apartment�ASTA)
[STAThreadAttribute]
void main(void) {
	//�Ұʥi����
	Application::EnableVisualStyles();
	//�����|���TextRender�覡�ϥ�
	Application::SetCompatibleTextRenderingDefault(false);
	//�إ�Window Forms
	hw12::MyForm myform;
	Application::Run(% myform);
}