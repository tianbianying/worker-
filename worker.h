#pragma once
# include <iostream>
using namespace std;

class Worker//������Ҫ�õ��̳�
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;
	//��Щ������
	string m_name;
	int m_I_D;
	int m_DeptId;//���Ҳ²���Ӧ���Ǻ�����Ҳ���Ҫ���ı�š�

};

class staff: public Worker//Ա��
{
public:
	staff(string name, int Id, int m_DeptId)
	{
		this->m_name = name;
		this->m_I_D = Id;
		this->m_DeptId = m_DeptId;
	}
public:
	void showInfo();
	string getDeptName();
};

class manager: public Worker//����
{
public:
	manager(string name, int Id, int m_DeptId)
	{
		this->m_name = name;
		this->m_I_D = Id;
		this->m_DeptId = m_DeptId;
	}
public:
	void showInfo();
	string getDeptName();
};

class boos : public Worker//�ϰ�
{
public:
	boos(string name, int Id, int m_DeptId)
	{
		this->m_name = name;
		this->m_I_D = Id;
		this->m_DeptId = m_DeptId;
	}
public:
	void showInfo();
	string getDeptName();
};