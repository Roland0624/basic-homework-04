#include <iostream>  
#include <cstring>
using namespace std;

int main()
{
	/*�إ߿�J�ܼ�TimeInput��ܿ�J�ɶ�(��)
	 TimeOutput_h,TimeOutput_m,TimeOutput_s
	 ����ഫ���ɡB���B��*/
	int TimeInput, TimeOutput_h, TimeOutput_m, TimeOutput_s, num;

	cout << "�п�J�ɶ�";
	cin >> TimeInput;
	TimeOutput_h = (TimeInput / 3600);   //���H3600����� 
	TimeOutput_m = (TimeInput % 3600) / 60;//���H3600���l�ư��H60����� 
	TimeOutput_s = (TimeInput % 3600) % 60;//�����H60���l�Ƶ���� 

	cout << TimeOutput_h << "��" << TimeOutput_m << "��" << TimeOutput_s << "��";//��ܮɶ�

	
	system("pause");   //�Ȱ��A�ץ��N���~��
	return 0;

}