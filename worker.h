#pragma once
# include <iostream>
using namespace std;

class Worker//这里需要用到继承
{
public:
	//显示个人信息
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;
	//这些是属性
	string m_name;
	int m_I_D;
	int m_DeptId;//据我猜测这应该是后面查找才需要他的编号。

};

class staff: public Worker//员工
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

class manager: public Worker//经理
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

class boos : public Worker//老板
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