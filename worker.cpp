# include "worker.h"

void staff::showInfo()
{
	cout << "Ա���������ǣ�" << m_name << "\t"
		<< "Ա���ı�ţ�" << m_I_D << "\t"
		<< "Ա����ְλ��" << getDeptName() << "\t"
		<< "Ա����ְ����ɾ�����������" << endl;
}
void manager::showInfo()
{
	cout << "Ա���������ǣ�" << m_name << "\t"
		<< "Ա���ı�ţ�" << m_I_D << "\t"
		<< "Ա����ְλ��" << getDeptName() << "\t"
		<< "Ա����ְ������ϰ彻���������·�" << endl;
}
void boos::showInfo()
{
	cout << "Ա���������ǣ�" << m_name << "\t"
		<< "Ա���ı�ţ�" << m_I_D << "\t"
		<< "Ա����ְλ��" << getDeptName() << "\t"
		<< "Ա����ְ����ɹ�˾��ͳ��" << endl;
}
string staff::getDeptName()
{
	return "Ա��";
}
string manager::getDeptName()
{
	return "����";
}
string boos::getDeptName()
{
	return "�ϰ�";
}